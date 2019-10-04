#include "pch.h"
#include "Docent.h"

Docent::Docent(const std::string _docentName, int _docentAge, int _salary) : Person(_docentName, _docentAge), salary(_salary) {}

Docent::~Docent()
{
	//Deconstructor
}

int Docent::getSalary()
{
	return salary;
}