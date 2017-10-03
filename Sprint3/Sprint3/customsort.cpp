#include "customsort.h"

customSort::customSort(michaelVector<michaelString> &toBeSorted)
{
    sort(toBeSorted,0);
}
void customSort::sort(michaelVector<michaelString> &toBeSorted, int counter){

    if(counter != toBeSorted.getLength()){ //guard statment to detect end of sort
    for(int i = 0 + counter; i < toBeSorted.getLength(); i++){ //cycles through array each time incrementing the starting point
        if( toBeSorted[counter].getLength() >  toBeSorted[i].getLength()){ //detects if value at counter is greater than any other value in array
            swap( toBeSorted[counter],  toBeSorted[i]); //if so swaps it to put array in ascending order
        }
        if (toBeSorted[counter].getLength() ==  toBeSorted[i].getLength()){
            if(toBeSorted[counter] >  toBeSorted[i]){

                swap( toBeSorted[counter],  toBeSorted[i]);
            }
        }
    }
    sort(toBeSorted, counter+1); //recursive call to repeat this function until end of array
    }
}

void customSort::quickSortLength(michaelString arr[], int left, int right){
    int i = left;
    int j = right;
    michaelString temp;
    int pivot = arr[(left + right)/2].getLength();
    while(i <= j){
        while(arr[i].getLength() < pivot)
            i++;
        while(arr[j].getLength() > pivot)
            j--;
        if(i <= j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if(left < j)
        quickSortLength(arr, left, j);
    if(i < right)
        quickSortLength(arr, i, right);
}

int customSort::findMedian(michaelString arr[], int length){
    int median = 0;
    return median;
}
