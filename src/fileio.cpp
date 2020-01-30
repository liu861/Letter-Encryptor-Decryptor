#include "fileio.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Read in a file and return a vector of strings
bool getData(const std::string& inputLocation, std::vector<std::string>& data)
{
    // TODO: Complete function
    //open file
    std::ifstream ifile(inputLocation);
    //check if file is opened
    if(!ifile.is_open())
    {
        std::cout << "File " << inputLocation << "didn't open successfully!" << std::endl;
        return false;
    }
    //load file contents
    while(!ifile.eof())
    {
        std::string textLine;
        std::getline(ifile, textLine);
        data.push_back(textLine);
    }
    // TODO: Fix this
    //close file
    ifile.close();
    return true;
}

// Output the vector of strings to the file
bool putData(const std::string& outputLocation, const std::vector<std::string>& data)
{
    // TODO: Complete function
    std::ofstream ofile(outputLocation);
    //check if file is opened
    if(!ofile.is_open())
    {
        std::cout << "File" << outputLocation << "didn't open successfully!" << std::endl;
        return false;
    }
    //write to file
    for(int i = 0; i < data.size()-1; i++)
    {
        ofile << data[i] << "\n";
    }
    ofile << data[data.size()-1];
    // TODO: Fix this
    //close file
    ofile.close();
    return true;
}
