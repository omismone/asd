#pragma once

#include<iostream>
#include<cstdlib>
#include<ctime>

/************************************************************
    Sorts arr from index start to end using QuickSort.
************************************************************/
void quickSort(int* arr, int start, int end);

/************************************************************
    Chooses a random pivot in arr between start and end and
    partitions the array by placing all elements smaller than
    the pivot to its left and the others to its right.

    return: index of the pivot after partition
************************************************************/
int partition(int* arr, int start, int end);