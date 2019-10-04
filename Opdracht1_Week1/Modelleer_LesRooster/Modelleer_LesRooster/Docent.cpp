#include "pch.h"
#include "Docent.h"


Docent::Docent(std::string _docentName, int _salary)
{
	//Constructor
	docentName = _docentName;
	salary = _salary;
}

Docent::~Docent()
{
	//Destructor
}

std::string Docent::getName()
{
	return docentName;
}

int Docent::getSalary()
{
	return salary;
}