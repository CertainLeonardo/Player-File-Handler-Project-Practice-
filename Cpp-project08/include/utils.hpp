// utils.hpp
#ifndef UTILS_HPP // Guards. If not defined, define UTILS_HPP to prevent multiple inclusions of this header file
#define UTILS_HPP // define UTILS_HPP

#include <string> // Include the string library for using std::string

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
        
        FileHandler(const std::string& file); // constructor to initialize the filename
        void writetoFile(const std::string& data); // method to write data to the file
        const std::string& readFromFile(); // method to read data  from the file
};

#endif // end of include guard