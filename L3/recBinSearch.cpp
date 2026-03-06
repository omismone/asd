/*************************************************************
    Author: Simone Migliazza 7560422
    Recursive Binary Search implementation
*************************************************************/

#include<iostream>

int recBinSearch(int* arr, int elem, int start, int end);

int main()
{
    const int N = 10;
    int arr[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elem;
    std::cout << "insert an integer number: ";
    std::cin >> elem;
    int res = recBinSearch(arr, elem, 0, N-1);
    if(res == -1)
        std::cout << elem << " isn't in the array [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]\n";
    else
        std::cout << elem << " is at index " << res << " in the array [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]\n";
    return 0;
}

/************************************************************/
// search for elem in an ordered array arr starting from start up to end
int recBinSearch(int* arr, int elem, int start, int end)
{
    if(start >= end)
    {
        if(arr[start] == elem)
            return start;
        else
            return -1;        
    }
    int mid = (start + end) / 2;
    if(arr[mid] == elem)
        return mid;
    else if (elem > arr[mid])
        return recBinSearch(arr, elem, mid+1, end);
    else
        return recBinSearch(arr, elem, start, mid-1);
}