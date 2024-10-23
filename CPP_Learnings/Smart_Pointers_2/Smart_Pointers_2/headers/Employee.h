#pragma once
#include<iostream>
#include<string>
#include <vector>

class Employee
{
public:
	Employee(int age);
	Employee();
	Employee(std::string _fname, int _age);

	std::string fname;
	int age;

	Employee(const Employee&);
	Employee& operator=(const Employee&);

	void display();
	~Employee();
};

