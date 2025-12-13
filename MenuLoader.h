#pragma once

#include <string>
#include <vector>
#include <string>

class MenuLoader {
public:
    struct Dish {
        int id;
        std::string name;
        std::string icon;
        std::string short_desc;
        std::string long_desc;
        int weight;
        double calories;
        double protein;
        double fat;
        double carbs;
        double price;
    };

    static std::vector<Dish> LoadFile(const std::string& path);

private:
    static std::vector<std::string> Split(const std::string& line);
};
