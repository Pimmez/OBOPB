#pragma once
#include <string>

class Docent
{
public:
	Docent(const std::string _docentName, int _salary);
	~Docent();
	std::string getName();
	int getSalary();

private:
	std::string docentName;
	int salary;
};