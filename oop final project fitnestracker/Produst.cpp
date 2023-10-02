#include "Produst.h"

Produst::Produst(std::string name, std::string prot, std::string fat, std::string crrbo, std::string cal)
{
    this->name = name;
    if (prot == "-")  this->protein = 0;
    else this->protein = std::stof(prot);
    if (fat == "-")  this->fat = 0;
    else this->fat = std::stof(fat);
    if (crrbo == "-")  this->carbohydrate = 0;
    else this->carbohydrate = std::stof(crrbo);
    if (crrbo == "-")  this->carbohydrate = 0;
    else this->carbohydrate = std::stof(crrbo);
    if (cal == "-")  this->Òaloryes = 0;
    else this->Òaloryes = std::stof(cal);
}

std::string Produst::getName()
{
    return name;
}

float Produst::getProtein()
{
    return protein;
}

float Produst::get—arbohydrate()
{
    return carbohydrate;
}

float Produst::getCaloryes()
{
    return Òaloryes;
}
