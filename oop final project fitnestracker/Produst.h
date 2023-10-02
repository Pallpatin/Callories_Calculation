#pragma once
#include <string>
class Produst
{
private:
	std::string name;
	float protein;
	float fat;
	float carbohydrate;
	float Òaloryes;
public:
	Produst(std::string name, std::string prot, std::string fat, std::string crrbo, std::string cal);
	std::string getName();
	float getProtein();
	float get—arbohydrate();
	float getCaloryes();
};

