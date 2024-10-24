#include "PrimeNums.h"
#include <iostream>
#include <thread>
using namespace std;


int main()
{
    int start = 1;
    int end = 100;
    int mid = (start + end) / 2;

    vector<thread> threads;
    vector<int> allPrimes;
    mutex resultMutex;

    thread t1([start, mid, &allPrimes, &resultMutex]() {
        PrimeNums finder(start, mid);
        finder.findPrimes();
        auto primes = finder.getPrimes();
        lock_guard<mutex> lock(resultMutex);
        allPrimes.insert(allPrimes.end(), primes.begin(), primes.end());
        });

    thread t2([mid, end, &allPrimes, &resultMutex]() {
        PrimeNums finder(mid + 1, end);
        finder.findPrimes();
        auto primes = finder.getPrimes();

        lock_guard<mutex> lock(resultMutex);
        allPrimes.insert(allPrimes.end(), primes.begin(), primes.end());
        });

    t1.join();
    t2.join();

    cout << "Primes in range: ";
    for (const auto& prime : allPrimes) {
        cout << prime << " ";
    }
}
