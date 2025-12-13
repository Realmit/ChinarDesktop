#include"MenuLoader.h"
#include<fstream>
#include<sstream>

using namespace std;

vector<string> MenuLoader::Split(const string& line) {
    vector<string> result;
    string field;

    for (char c : line)
    {
        if (c == '|')
        {
            result.push_back(field);
            field.clear();
        }
        else
        {
            field += c;
        }
    }
    result.push_back(field);
    return result;
}

vector<MenuLoader::Dish>
MenuLoader::LoadFile(const string& path) {

    vector<Dish> menu;
    ifstream file(path);
    string line;

    if (!file.is_open())
        return menu;

    getline(file, line);

    while (getline(file, line)) {
        auto f = Split(line);
        if (f.size() < 11) continue;

        Dish d;
        d.id = stoi(f[0]);
        d.name = f[1];
        d.icon = f[2];
        d.short_desc = f[3];
        d.long_desc = f[4];
        d.weight = stoi(f[5]);
        d.calories = stod(f[6]);
        d.protein = stod(f[7]);
        d.fat = stod(f[8]);
        d.carbs = stod(f[9]);
        d.price = stod(f[10]);

        menu.push_back(d);
    }
    return menu;
}
