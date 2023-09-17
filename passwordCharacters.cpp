#include <iostream>

#ifndef PASSWORDCHARACTERS_H
#define PASSWORDCHARACTERS_H

namespace characters
{
    // using strings to use  .find() function that nor arrays neither vectors have  
    const std::string characterString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string specialCharacterString = "!@#$%^&*()_+-=";
}

#endif