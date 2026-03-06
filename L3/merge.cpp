/*************************************************************
    Author: Simone Migliazza 7560422
    Merge sort implementation
*************************************************************/

#include<iostream>

void mergeSort(int* arr, int start, int end);
void merge(int* arr, int start, int mid, int end);

int main()
{
    const int N = 10;
    int arr[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    
    std::cout << "before: ";
    for(int i=0; i<N; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    mergeSort(arr, 0, N-1);

    std::cout << "after: ";
    for(int i=0; i<N; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}

/************************************************************/
//  sort an array of integers arr from start to end
void mergeSort(int* arr, int start, int end)
{
    if(start >= end)
        return;
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

/************************************************************/
//  merge two sub-parts of arr (start to mid and mid+1 to end) ordering the elements
void merge(int* arr, int start, int mid, int end)
{
    int* first = new int[mid+1-start];
    int* last = new int[end-mid];

    // fill first and last
    for(int i=0; i<(mid+1-start); i++)
    {
        first[i] = arr[start + i];
    }
    for(int i=0; i<(end-mid); i++)
    {
        last[i] = arr[mid + 1 + i];
    }

    // start by filling using the leasts from first and last till you have used one completely
    int i_first = 0, i_last = 0, i=start;
    while(i_first < (mid+1-start) && i_last < (end-mid))
    {
        if(first[i_first] < last[i_last])
            arr[i++] = first[i_first++];
        else
            arr[i++] = last[i_last++];
    }
    // first or last empty, fill arr with the remaining sub-part
    while(i_first < (mid+1-start))
        arr[i++] = first[i_first++];
    while(i_last < (end-mid))
        arr[i++] = last[i_last++];

    delete[] first;
    delete[] last;
}