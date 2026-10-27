#include <array>
#include <vector>
#include <iostream>
#include "utils.hpp"

int arrayFunc() 
{
    // what is the vector and array in the standard library?
    // In C++, the standard library provides two main types of containers for storing collections of elements: std::array and std::vector.
    // here's a brief overview of each:
    std::array<int, 5> myArray = {1, 2, 3, 4, 5}; // Fixed-size array with 5 elements
    std::vector<int> myVector; // Dynamic array (vector) that can grow in size

    for (int i = 0; i < myArray.size(); ++i) 
    {
        std::cout << "Array element " << i << ": " << myArray[i] << "\n";
    }

    return 0;
}