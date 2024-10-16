#include "Sorter.h"

Sorter::Sorter(int arr[], int n) {
	size = n;
	data = new int[size];

	for (int i = 0; i < size; i++) {
		data[i] = arr[i];
	}
}

void Sorter::display() {
	for (int i = 0; i < size; i++) {
		std::cout << data[i] << std::endl;
	}
}

Sorter::~Sorter() {}