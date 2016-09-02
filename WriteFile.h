/*  
	Name: Dustin Ollis & 
	Program: WriteFile.cpp
	Date: 1 Sep 2016
	Purpose: Change STRUCT to class for ReadFile and WriteFile.
*/
//Include Guard.
#if !defined WRITE_FILE	
#define WRITE_FILE

#include "Text.h"

#include <fstream>//Needed for ofstream.

using namespace std;

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	public:
/*	Pre: Valid filename as a const char array
	Post: New WriteFile with the specified name opened and ready to writeline to.	*/
		WriteFile(const char* file_name);
/* 	Pre: Valid, open writefile.
	Post: Closed and saved WriteFile, no longer accessable.	*/
		~WriteFile();
/*	Pre: Valid, open writefile, and a String* with data to be included.
	Post: Data from line included in file.	*/
		void writeLine(String* line);
/*	Pre: Valid Writefile.
	Post: WriteFile is saved, and is no longer able to be wrote to.	*/
		void close();
};

#endif
