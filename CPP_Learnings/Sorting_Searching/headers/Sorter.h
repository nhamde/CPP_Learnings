#pragma once
#include <iostream>

class Sorter
{
public:
	int *data;
	int size;

	Sorter(int arr[], int n);
	void display();
	~Sorter();
};

