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
            std::cout << "Encrypting!" << std::endl;
            getData(<#const std::string &inputLocation#>, <#std::vector<std::string> &data#>);
            substitutionCypherEncrypt(<#const std::string &cypher#>, <#const std::string &input#>, <#std::string &output#>);
            putData(<#const std::string &outputLocation#>, <#const std::vector<std::string> &data#>);
            return 0;
        }
		// TODO: complete decrypt mode
        else if(edType == DSUB)
        {
            //we're in decrypt mode
            std::cout << "Decrypting!" << std::endl;
            getData(<#const std::string &inputLocation#>, <#std::vector<std::string> &data#>);
            substitutionCypherDecrypt(<#const std::string &cypher#>, <#const std::string &input#>, <#std::string &output#>);
            putData(<#const std::string &outputLocation#>, <#const std::vector<std::string> &data#>);
            return 0;
        }
	}
    return 1;
}
