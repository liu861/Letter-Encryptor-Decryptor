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
            char upperLetter = '\0';
            for(int i = 65; i <= 90; i++)
            {
                for(int j = 0; j < 26; j++)
                {
                    if(letter == char(i))
                    {
                        upperLetter = cypher.at(j);
                        putchar(toupper(upperLetter));
                        output.push_back(upperLetter);
                    }
                }
            }
        }
        else
        {
            char lowerLetter = '\0';
            for(int i = 97; i <= 122; i++)
            {
                for(int j = 0; j < 26; j++)
                {
                    if(letter == char(i))
                    {
                        lowerLetter = cypher.at(j);
                        putchar(tolower(lowerLetter));
                        output.push_back(lowerLetter);
                    }
                }
            }
        }
    }
}

// Decrypts 2nd input
void substitutionCypherDecrypt(const std::string& cypher, const std::string& input, std::string& output)
{
    // TODO: Complete function
    for(int i = 0; i < cypher.length(); i++)
    {
        char letter = input.at(i);
        if(isupper(letter))
        {
            char upperLetter = '\0';
            for(int i = 65; i <= 90; i++)
            {
                for(int j = 0; j < 26; j++)
                {
                    if(letter == char(i))
                    {
                        upperLetter = cypher.at(j);
                        putchar(toupper(upperLetter));
                        output.push_back(upperLetter);
                    }
                }
                
            }
        }
        else
        {
            char lowerLetter = '\0';
            for(int i = 97; i <= 122; i++)
            {
                for(int j = 0; j < 26; j++)
                {
                    if(letter == char(i))
                    {
                        lowerLetter = cypher.at(j);
                        putchar(tolower(lowerLetter));
                        output.push_back(lowerLetter);
                    }
                }
            }
        }
    }
}
