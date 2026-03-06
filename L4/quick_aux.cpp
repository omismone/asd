#include "quick.hpp"

void swap(int& a, int& b);

void quickSort(int* arr, int start, int end)
{
    if(start >= end) return;
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int partition(int* arr, int start, int end)
{
    swap(arr[end], arr[start + (rand() % (end - start + 1))]);
    int pivot = end;
    int i = start-1;
    for(int j=start; j<end; j++)
    {
        if(arr[j] <= arr[pivot])
            swap(arr[++i], arr[j]);
    }
    swap(arr[i+1], arr[pivot]);
    return i+1;
}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}