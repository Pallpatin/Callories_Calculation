#pragma once
#include<string>
#include <fstream>
class Adaprer
{
	std::string path = "baza.csv";
public:
	std::string GetBazaPath() { return path; }
	void replace(std::string path,char from,char to);
};

