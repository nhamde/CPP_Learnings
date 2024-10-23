#include"Sorter.h"
#include <iostream>
#include <algorithm>

bool compare(int i, int j) {
    return (i < j);
}

int main()
{
    int arr[] = {5,4,3,2,1};
    Sorter sorter(arr, 5);
    std::sort(sorter.data, sorter.data + 5, compare);
    sorter.display();
    int k = 6;
    if (std::binary_search(sorter.data, sorter.data + sorter.size, k))
        std::cout << "found" << std::endl;
    else std::cout << "Not found" << std::endl;
}

