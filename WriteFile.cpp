#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

WriteFile::~WriteFile()
{
   output_file.close();
   delete closed;
}

WriteFile::void close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

WriteFile::void writeLine(String* line)
{
   if (!closed && length() > 0)
   {
      output_file << getText() << endl;
   }
}
