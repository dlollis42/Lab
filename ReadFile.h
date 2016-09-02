/*  
	Name: Dustin Ollis & 
	Program: ReadFile.h 
	Date: 1 Sep 2016
	Purpose: Change STRUCT to class for ReadFile and WriteFile.
*/
#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	private:
		//Program Only Access.
		ifstream input_file;	//Stores input_file
		bool _eof;
		bool closed;
		

	public:
		//Directly User Accessable
		
		/*	Pre: Const Char* of file name to be opened. File name should be valid.
			Post: Creates ReadFile with the specified file. */
		ReadFile(const char* file_name);
		/*	Pre: Previously Opened Readfile calling function.
			Post: Fully Removes ReadFile, and closes it */
  		~ReadFile(); 
		/*	Pre: Valid ReadFile calling function.
			Post: Saves file. No longer accessable	*/
		void close(); 
		/*	Pre: Valid ReadFile calling function.
			Post: Outputs String* of the next available line, 
				  or NULL if the file is closed,
				  or NULL if the file is out of lines.	*/
		String* readLine();
		/*	Pre: Valid ReadFile calling function.
			Post: Returns boolean value TRUE if the file is at the last line,
				  or FALSE if there are more lines.	*/
		bool eof();
		



};
#endif
