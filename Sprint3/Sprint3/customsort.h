#include <../../lib/michaelString.h>
#include <../../lib/michaelvectors.h>
#ifndef CUSTOMSORT_H
#define CUSTOMSORT_H


class customSort
{
public:
    customSort(michaelVector<michaelString> &toBeSorted);
    void sort(michaelVector<michaelString> &, int);
    void quickSortLength(michaelString arr[], int left, int right);
    int findMedian(michaelString arr[], int length);
};

#endif // CUSTOMSORT_H
