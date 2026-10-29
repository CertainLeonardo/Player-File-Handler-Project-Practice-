#include <array>
#include <vector>
#include <iostream>
#include "utils.hpp"

int arrayFunc() 
{
    std::array<int, 5> myArray = {1, 2, 3, 4, 5}; // Fixed-size array with 5 elements
    std::vector<int> myVector; // Dynamic array (vector) that can grow in size

    for (int i = 0; i < myArray.size(); ++i) 
    {
        std::cout << "Array element " << i << ": " << myArray[i] << "\n";
    }

    return 0;
}