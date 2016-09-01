#include "WriteFile.h"
#include <sstream>


WriteFile::WriteFile(const char* file_name)
{
	output_file.open(file_name);
	closed = false;

}

WriteFile::~WriteFile()
{
	close(this);
	delete this;
}

void WriteFile::close(WriteFile* wf)
{
   if (!wf->closed)
   {
      wf->output_file.close();
      wf->closed = true;
   }	
}

void WriteFile::writeLine(String* line)
{
   if (!this->closed && line->length() > 0)
   {
      this->output_file << line->getText() << endl;
   }	
}
/* 
WriteFile* createWriteFile(const char* file_name)
{
   WriteFile* wf = new WriteFile;
   wf->output_file.open(file_name);
   wf->closed = false;
   return wf;
}

void destroyWriteFile(WriteFile* wf)
{
   close(wf);
   delete wf;
}

void close(WriteFile* wf)
{
   if (!wf->closed)
   {
      wf->output_file.close();
      wf->closed = true;
   }
}

void writeLine(WriteFile* wf, String* line)
{
   if (!wf->closed && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
 */