#pragma once
#include<iostream>
#include<string>
class Employee
{
public:
	std::string fname;
	int age;

	Employee(int age);
	Employee();
	Employee(std::string _fname, int _age);
	void display();
	~Employee();
};

