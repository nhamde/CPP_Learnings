#pragma once
#include<iostream>
#include<string>
#include <vector>
#include "CopyObj.h"
class Employee
{
public:
	Employee(int age);
	Employee();
	Employee(std::string _fname, int _age);

	std::string fname;
	int age;
	std::vector<int> vec;
	CopyObj CO;
	int* ptr = new int();

	Employee(const Employee&);
	Employee& operator=(const Employee&);

	void display();
	~Employee();
};

