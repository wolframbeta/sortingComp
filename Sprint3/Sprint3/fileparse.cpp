#include "fileparse.h"
#include "customsort.h"
#include <fstream>

FileParse::FileParse(const char **&argv)
{
    ifstream fileToSort(argv[1], ios::in);
    ofstream outputFile(argv[2], ios::out);
    if(!fileToSort){
        cout << "Critical Erorr" << endl;
    }
    while(!fileToSort.eof()){

        if(firstWordflag == 0){
        fileToSort.getline(buffer,35);

        numWords = atoi(buffer);
        firstWordflag = 1;

        }
        if(secondWordFlag == 0){
        fileToSort.getline(buffer,35);

        numWordsToSort = atoi(buffer);
        secondWordFlag = 1;

        }
        fileToSort.getline(buffer, 35);
        michaelString word(buffer);
        if(!word.empty()){
        listToBeSorted.add(word);
        }
    }

    customSort x(listToBeSorted);
    for(int i = 0; i < numWordsToSort; i++){
        outputFile << listToBeSorted[i] << endl;
    }
}
