#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

#include "srcmain.h"
#include "fileio.h"
#include "cypher.h"

// Implementation of ProcessCommandArgs
int ProcessCommandArgs(int argc, const char* argv[])
{
	// Interactive mode
	if (argc == 1)
	{
		// Not used for this assignment	
	}

	// Command line testing mode
	else if (argc == 4)
	{
		// Then input[0] is the type of encryption / decryption to do
		std::string edType(argv[0]);

		// input[1] is the input file name
		std::string inputFileName(argv[1]);

		// input[2] is the output file name
		std::string outputFileName(argv[2]);		

		// TODO: complete encrypt mode
        if(edType == ESUB)
        {
            //we're in encrypt mode
            //create an empty vector to store input text
            std::vector<std::string> enData;
            //move input data into vector of strings
            getData(inputFileName, enData);
            //get cypher from line 1
            std::string cypher;
            cypher += enData[0];
            //declare input and output strings for subcypher function
            std::string input;
            std::string output;
            //empty vector to store output text
            std::vector<std::string> enOutput;
            while(!enData.empty())
            {
                int i = 1;
                input += enData[i];
                //encrypting
                substitutionCypherEncrypt(cypher, input, output);
                enOutput.push_back(output);
                i++;
            }
            //write out to file
            putData(outputFileName, enOutput);
            return 0;
        }
		// TODO: complete decrypt mode
        else if(edType == DSUB)
        {
            //we're in decrypt mode
            //create an empty vector to store input text
            std::vector<std::string> deData;
            getData(inputFileName, deData);
            //get cypher from line 1
            std::string cypher;
            cypher += deData[0];
            //declare input and output strings for subcypher function
            std::string input;
            std::string output;
            //empty vector to store output text
            std::vector<std::string> deOutput;
            while(!deData.empty())
            {
                int i = 1;
                input += deData[i];
                //decryptinng
                substitutionCypherDecrypt(cypher, input, output);
                deOutput.push_back(output);
                i++;
            }
            //write to file
            putData(outputFileName, deOutput);
            return 0;
        }
	}
    return 1;
}
