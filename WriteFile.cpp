/*  
	Name: Dustin Ollis & 
	Program: WriteFile.cpp
	Date: 1 Sep 2016
	Purpose: Change STRUCT to class for ReadFile and WriteFile.
*/
#include "WriteFile.h"
#include <sstream>


WriteFile::WriteFile(const char* file_name)
{
	output_file.open(file_name);	//Simply open fstream with the provided name.
	closed = false;	//Set closed to false directly to ensure its value.

}

WriteFile::~WriteFile()
{
	this->close();	//The deconstructor deletes the new variable for us, so just call and save the file before delete.
}

void WriteFile::close()
{
	//Ensure we are not closed already.
   if (!closed)
   {
      output_file.close();	//Call the close() function of fstream.
      closed = true;	//set the variable so we don't close a file that doesn't exist.
   }	
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)	//If the file isn't closed, and the string line has data.
   {
     output_file << line->getText() << endl;	//write the output file with the string, and endline.
   }	
}
