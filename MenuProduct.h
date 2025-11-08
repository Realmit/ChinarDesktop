#include <string>
#include <iostream>
#include "Categories.h"
#include "Products.h" 
#pragma once
public class MenuProduct
{
public:
	Products name;
	std::string description;
	std::string fullDescription;
	Categories category;
	double price;
	double calories;
	double carbs;
	double fat;
	double mass;
	double protein;
};

