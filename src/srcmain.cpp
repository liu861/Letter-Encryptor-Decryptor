#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

#include "srcmain.h"
#include "fileio.h"
#include "cypher.h"

using std::string;
using std::vector;

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
            vector<string> enData;
            //move input data into vector of strings
            getData(inputFileName, enData);
            //get cypher from line 1
            string cypher;
            cypher += enData[0];
            //declare input and output strings for subcypher function
            string input;
            string output;
            //empty vector to store output text
            vector<string> enOutput;
            enOutput.push_back(cypher);
            for(int i = 1; i < enData.size(); i++)
            {
                input += enData[i];
                //encrypting
                substitutionCypherEncrypt(cypher, input, output);
                enOutput.push_back(output);
                output.clear();
                input.clear();
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
            vector<string> deData;
            getData(inputFileName, deData);
            //get cypher from line 1
            string cypher;
            cypher += deData[0];
            //declare input and output strings for subcypher function
            string input;
            string output;
            //empty vector to store output text
            vector<string> deOutput;
            deOutput.push_back(cypher);
            for(int i = 1; i < deData.size(); i++)
            {
                input += deData[i];
                //decrypting
                substitutionCypherDecrypt(cypher, input, output);
                deOutput.push_back(output);
                output.clear();
                input.clear();
            }
            //write to file
            putData(outputFileName, deOutput);
            return 0;
        }
	}
    return 1;
}
