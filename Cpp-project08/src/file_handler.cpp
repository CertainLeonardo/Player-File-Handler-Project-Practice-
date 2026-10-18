#include <fstream>
#include <iostream>
#include <string> // Added explicitly for std::string
#include "utils.hpp"

FileHandler::FileHandler(const std::string& file) : filename(file) 
{
    std::ifstream outFile("data/" + filename + ".txt"); // Open the file for reading
    if (!outFile) // Check if the file was opened successfully
    {
        std::cout << "\n"; // print a newline for better formatting
        std::cerr << "Error opening file for reading: " << filename << "\n" << std::endl; // print error message if file opening fails
        return; // exit the constructor if file opening fails
    }
    else
    {
        std::cout << "File opened successfully: " << filename << "\n" << std::endl; // print success message if file opening succeeds
    }
}

void FileHandler::writetoFile(const std::string& data)
{
    std::ofstream outFile("data/" + filename + ".txt"); // Open the file for writing
    if (!outFile) // Check if the file was opened successfully
    {
        std::cerr << "Error opening file for writing: " << filename << "\n" << std::endl; // print error message if file opening fails
        return; // exit the function if file opening fails
    } else 
    {
        std::cout << "File opened successfully for writing: " << filename << "\n" << std::endl; // print success message if file opening succeeds
    }
    outFile << data; // Write the data to the file
    outFile.close(); // Close the file
}