#include "cypher.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cctype>

// Encrypts 2nd input
void substitutionCypherEncrypt(const std::string& cypher, const std::string& input, std::string& output)
{
    // TODO: Complete function
    for(int i = 0; i < cypher.length(); i++)
    {
        char letter = input.at(i);
        if(isupper(letter))
        {
            char upperLetter = cypher.at(i);
            putchar(toupper(upperLetter));
            output.push_back(upperLetter);
        }
        else
        {
            char lowerLetter = cypher.at(i);
            putchar(tolower(lowerLetter));
            output.push_back(lowerLetter);
        }
    }
}

// Decrypts 2nd input
void substitutionCypherDecrypt(const std::string& cypher, const std::string& input, std::string& output)
{
    // TODO: Complete function
    for(int i = 0; i < cypher.length(); i++)
    {
        char letter = cypher.at(i);
        if(isupper(letter))
        {
            char upperLetter = input.at(i);
            putchar(toupper(upperLetter));
            output.push_back(upperLetter);
        }
        else
        {
            char lowerLetter = input.at(i);
            putchar(tolower(lowerLetter));
            output.push_back(lowerLetter);
        }
    }
}
