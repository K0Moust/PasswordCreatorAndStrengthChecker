#include <iostream>
#include <cstdlib>
#include "passwordCharacters.cpp"
#include <string>

#ifndef PASSWORDGENERATIONANDCREATION_H
#define PASSWORDGENERATIONANDCREATION_H

namespace passwordGen
{
    std::string createPassword()
    {
        int characterChoice;
        std::string passwordText;
        while(passwordText.length() <= 12)
        {
            characterChoice = std::rand() % 4;
            switch(characterChoice)
            {
                case 1:
                    passwordText += characters::characterString[rand() % characters::characterString.length()];
                case 2:
                    passwordText += std::to_string(rand() % 10);
                case 3:
                    passwordText += characters::specialCharacterString[rand() % characters::specialCharacterString.length()];
            }
        }
        return passwordText;
    }
}

namespace passwordStrngth
{
    void passwordStrengthChecker(std::string password)
    {
        //the variable passwordPoints is used as a checkpoint for each on of the 5 things
        //a strong password should have: length, special characters, numbers, lower and upper case letters
        int passwordPoints = 0;
        for (int indx = 0; indx < password.length(); indx++)
        {
            if(password.length() >= 12)
            {
                passwordPoints++;
            }
            if(password[indx] >= 0 && password[indx] <= 9)
            {
                passwordPoints++;
            }
            if(characters::characterString.find(password[indx]) == true)
            {
                passwordPoints++;
            }
            if(characters::specialCharacterString.find(password[indx]) == true)
            {
                passwordPoints++;
            }
        }
        switch (passwordPoints)
        {
            case 1:
                std::cout << "Your password is  really weak." << std::endl;
                break;
            case 2:
                std::cout << "Your password is weak." << std::endl;
                break;
            case 3:
                std::cout << "Your password is adequate." << std::endl;
            case 4:
                std::cout << "Your password is fine." << std::endl;
                break;
            default: //case for any number over 4.
                std::cout << "Your password is perfect!" << std::endl;
                break;
        } 
    } 
}

#endif

