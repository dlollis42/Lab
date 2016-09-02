/*  
	Name: Dustin Ollis & 
	Program: ReadFile.cpp 
	Date: 1 Sep 2016
	Purpose: Change STRUCT to class for ReadFile and WriteFile.
*/

#include "ReadFile.h"

#include <iostream>	
#include <string>	//used for readLine data.
//Constructor derived directly from struct code, modified slightly to remove the unneeded "rf->" designation.
ReadFile::ReadFile(const char* file_name)
{
	//Driver makes the new ReadFile, so we don't need to.
   input_file.open(file_name);	
	closed = false;
	_eof = false;
	//No need to return, because it's built in.
}

 ReadFile::~ReadFile()
{
   this->close(); //Simply close the file using the function we have.
   //In the struct version this has a delete included, but we were getting full program crashes pertaining to deleting something that 
   //didn't exist, so that must imply the act of calling a deconstructor does it for us.
}
 
void ReadFile::close()
{
   if (!closed)	//if the value of closed isn't already true
   {
      input_file.close();	//Use the fstream close on the file.
      closed = true;		//set it to true, so we don't try to close the file again
   }
   //no return because of void, and it is unneeded.
} 

bool ReadFile::eof()
{
   return this->_eof;
}

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   this->_eof = !(getline(this->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;

}

