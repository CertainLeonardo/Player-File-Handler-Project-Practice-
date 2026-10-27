// utils.hpp
#ifndef UTILS_HPP
#define UTILS_HPP

#include <string> // Include the string library for using std::string

void workerFunction();
void runWorker();

void createObjectFile();

int arrayFunc(); // Function declaration for arrayFunc, which will be defined in array.cpp

void promptUserStart(); // Function declaration for prompting the user to start the game
void promptUserContinue(); // Function declaration for prompting the user to continue the game

class Player {
private:
    int health = 100;

public:
    void takeDamage();
    int getHealth();
};

class Enemy
{
    private:
        int health = 50;

    public:
        void takeDamage();
        int getHealth();
};

class FileHandler 
{
    private:
        std::string filename;

    public:
        void writeToFile(const std::string& filename, const std::string& data); // method to write data to the file
};

#endif
