#include <../../lib/michaelString.h>
#include<../../lib/michaelvectors.h>
#ifndef FILEPARSE_H
#define FILEPARSE_H


class FileParse
{
public:
   FileParse(const char **&argv);
private:
   michaelVector<michaelString> listToBeSorted;
   int numWords = 0;
   int numWordsToSort = 0;
   int firstWordflag = 0;
   int secondWordFlag = 0;

   char buffer[35];
   char c;
};

#endif // FILEPARSE_H
