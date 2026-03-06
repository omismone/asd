/************************************************************
    Author: Simone Migliazza 7560422

    QuickSort implementation
************************************************************/

#include "quick.hpp"

int main()
{
    std::srand(time(nullptr));

    const int N = 10;
    int arr[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    std::cout << "before: ";
    for(int i=0; i<N; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    quickSort(arr, 0, N-1);

    std::cout << "after: ";
    for(int i=0; i<N; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}