// Person_Overerving_Opdracht2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include "Student.h"
#include "Docent.h"

int main()
{
	Student newStudent0 = Student("Kees", 19, 1);
	Student newStudent1 = Student("Zack", 21, 2);

	Docent newDocent0 = Docent("James", 33, 1500);

	std::cout << "Name: " << newStudent0.getPersonName() << " Age: " << newStudent0.getAge() << " StudentNumber: " << newStudent0.getStudentNumber() << std::endl;
	std::cout << "Name: " << newStudent1.getPersonName() << " Age: " << newStudent1.getAge() << " StudentNumber: " << newStudent1.getStudentNumber() << std::endl;

	std::cout << "Name: " << newDocent0.getPersonName() << " Age: " << newDocent0.getAge() << " Salary: " << newDocent0.getSalary() << std::endl;

}