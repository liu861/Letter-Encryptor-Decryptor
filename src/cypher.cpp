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
    for(int i = 0; i < input.length(); i++)
    {
        char letter = input.at(i);
        if(isupper(letter) != 0)
        {
            char upperLetter = '\0';
            for(int j = 65; j <= 90; j++)
            {
                if(letter == char(j))
                {
                    upperLetter = cypher.at(j-65);
                    putchar(toupper(upperLetter));
                }
            }
            output.push_back(upperLetter);
        }
        else if(islower(letter) != 0)
        {
            char lowerLetter = '\0';
            for(int j = 97; j <= 122; j++)
            {
                if(letter == char(j))
                {
                    lowerLetter = cypher.at(j-97);
                    putchar(tolower(lowerLetter));
                }
            }
            output.push_back(lowerLetter);
        }
        else if(letter == char(32))
        {
            output.push_back(' ');
        }
    }
}

// Decrypts 2nd input
void substitutionCypherDecrypt(const std::string& cypher, const std::string& input, std::string& output)
{
    // TODO: Complete function
    for(int i = 0; i < input.length(); i++)
    {
        char letter = input.at(i);
        if(isupper(letter) != 0)
        {
            char upperLetter = '\0';
            for(int j = 65; j <= 90; j++)
            {
                if(letter == char(j))
                {
                    upperLetter = cypher.at(j-65);
                    putchar(toupper(upperLetter));
                }
            }
            output.push_back(upperLetter);
        }
        else if(islower(letter) != 0)
        {
            char lowerLetter = '\0';
            for(int j = 97; j <= 122; j++)
            {
                if(letter == char(j))
                {
                    lowerLetter = cypher.at(j-97);
                    putchar(tolower(lowerLetter));
                }
            }
            output.push_back(lowerLetter);
        }
        else if(letter == char(32))
        {
            output.push_back(' ');
        }
    }
}
