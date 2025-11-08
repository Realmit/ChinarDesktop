#ifndef CHINARCAFE_MENUITEM_H
#define CHINARCAFE_MENUITEM_H

#include <string>
#include <iostream>
#include <iomanip> 

struct MenuModel {
    int id;
    std::string name;
    std::string description;
    std::string fullDescription;
    std::string category;
    double price;
    double calories;
    double carbs;
    double fat;
    double mass;
    double protein;

    // Конструктор по умолчанию
    MenuModel() : id(0), price(0.0) {}

    // Конструктор для удобства создания объектов
    MenuModel(int _id, const std::string& _name, const std::string& _description, double _price, const std::string& _category)
        : id(_id), name(_name), description(_description), price(_price), category(_category) {
    }

    // Оператор сравнения для поиска по ID
    bool operator==(const MenuModel& other) const {
        return id == other.id;
    }

    // Оператор вывода для удобного логирования/отображения
    friend std::ostream& operator<<(std::ostream& os, const MenuModel& item) {
        os << "ID: " << item.id
            << ", Name: " << item.name
            << ", Desc: " << item.description
            << ", Price: " << std::fixed << std::setprecision(2) << item.price // Форматируем цену до 2 знаков после запятой
            << ", Category: " << item.category;
        return os;
    }
};

#endif 

