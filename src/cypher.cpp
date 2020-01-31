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
        //if char is a letter
        if(isalpha(int(letter)))
        {
            //set letter to correct place in cipher
            char newLetter = (char)(65 + cypher.find(toupper(letter)));
            //if letter is lowercase
            if(islower(letter))
            {
                newLetter += 32;
            }
            output.push_back(newLetter);
        }
        //if char is not a letter
        else
        {
            output.push_back(letter);
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
        //if char is a letter
        if(isalpha(letter))
        {
            char newLetter = '\0';
            if(isupper(letter))
            {
                newLetter = cypher.at(letter - 65);
            }
            else if(islower(letter))
            {
                newLetter = cypher.at(letter - 97);
            }
            //if letter is lowercase
            if(islower(letter))
            {
                newLetter += 32;
            }
            output.push_back(newLetter);
        }
        //if char is punctuation, numbers, etc.
        else
        {
            output.push_back(letter);
        }
    }
}
