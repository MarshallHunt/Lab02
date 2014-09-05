#include "WriteFile.h"
#include <sstream>

WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

~WriteFile()
{
   close(wf);
   delete wf;
}

void close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
