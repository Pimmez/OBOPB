// Modelleer_LesRooster.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include "Student.h"
#include "Module.h"
#include "Docent.h"

int main()
{
	Module newModule = Module("ECTTP", 12);
	Docent newDocent = Docent("Kipje Kip", 12000);
	Student newStudent = Student("Pietje Puk", 01);

	std::string myName;
	std::cout << "Welkom, What is your name?" << std::endl;

	std::cin >> myName;
	Student myStudent = Student(myName, 02);

	std::string moduleName;
	std::cout << "You Are Late!! OMG!!!! What class do you have??? (Only ECTTP works)" << std::endl;
	std::cin >> moduleName;

	if (newModule.getModuleName() == moduleName)
	{
		std::cout << "In class:" << std::endl;
		std::cout << "Hello, My name is: " << newDocent.getName() << ". I'm you teacher for today" << std::endl;
		std::cout << "Student with number: " << newStudent.getStudentNummer() << ". What is your name?" << std::endl;
		std::cout << newStudent.getStudentName() << std::endl;
		std::cout << "And who might you be??" << std::endl;
		std::cout << myStudent.getStudentName() << std::endl;
	}
}