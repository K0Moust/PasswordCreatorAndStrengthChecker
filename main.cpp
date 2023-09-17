#include <iostream>
#include "passwordGenerationAndCreation.cpp"
#include <string>

int main() 
{
    int programChoice = 0;
    while (programChoice != 3)
    {
        std::cout << "1. Generate a password." <<  std::endl;
        std::cout << "2. Check a password's strength."<<  std::endl;
        std::cout << "3. Close the program."  <<  std::endl;
        std::cin >> programChoice;

        if(programChoice == 1)
        {
            std::cout << passwordGen::createPassword() << std::endl;
        }
        else if (programChoice == 2)
        {
            std::string userPassword;
            std::cout << "Type your password:" << std::endl;
            std::cin >> userPassword;
            passwordStrngth::passwordStrengthChecker(userPassword);
        }
        else if(programChoice == 3)
        {
            std::cout << "Goodbye!" << std::endl;
            return 0;
        }
        else
        {
            std::cout << "Wrong input try again" << std::endl;

        }          
    }
}
