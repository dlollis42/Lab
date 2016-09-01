#if !defined WRITE_FILE
#define WRITE_FILE
#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	public:
		WriteFile(const char* file_name);
		~WriteFile();
		void writeLine(String* line);
		void close(WriteFile* wf);
};
/* struct WriteFile
{
   ofstream output_file;
   bool closed;
};

WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);
 */
#endif
