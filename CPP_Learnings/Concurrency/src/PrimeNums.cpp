#include "PrimeNums.h"
using namespace std;

PrimeNums::PrimeNums(int _start, int _end)
{
	start = _start;
	end = _end;
}

bool PrimeNums::isPrime(int num)
{
	if (num < 2)
		return false;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

void PrimeNums::findPrimes()
{
	for (int i = start; i <= end; i++)
	{
		if (isPrime(i))
		{
			lock_guard<mutex> lock(primeMutex);
			primeNums.push_back(i);
		}
	}
}

vector<int> PrimeNums::getPrimes() {
	return primeNums;
}