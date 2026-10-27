#include <fstream>
#include <iostream>
#include <string>
#include "utils.hpp"

void FileHandler::writeToFile(const std::string& filename, const std::string& data)
{
    using std::string, std::cerr, std::cout;

    string path = "data/" + filename + ".save";
    cout << "Attempting path: " << path << "\n";

    std::ofstream outFile(path);

    if (!outFile)
    {
        cerr << "Failed to open file: " + filename + "\n";
    }
    else
    {
        cout << "File found: " + filename + "\n";
    }
    outFile << "New File: " + filename + "\n";
    outFile << "Contents: \n";
    outFile << data;
    cout << "Path: " << path << "\n";

}

void createObjectFile()
{
    using std::string, std::cin, std::cout;

    FileHandler file;

    string inputFileName;
    string inputData;
    cout << "Enter a name for a new file: \n";
    std::getline(cin, inputFileName);
    cout << "Write some data for the file: \n";
    std::getline(cin, inputData);

    file.writeToFile(inputFileName, inputData);
}