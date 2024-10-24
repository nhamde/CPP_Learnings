#pragma once
#include <vector>
#include <mutex>
class PrimeNums
{
	bool isPrime(int num);
	int start;
	int end;
	std::vector<int> primeNums;
	std::mutex primeMutex;

public:
	PrimeNums(int start_, int end_);
	void findPrimes();
	std::vector<int>getPrimes();
};

