// ******************************
// Author: SM
// Programma che legge un array di int e stampa la frequenza di ogni valore contenuto.
// ******************************

#include<iostream>
#include<string>

#define LENGTH 3

void PrintArray(int *arr, std::string name);

int main()
{
    int arr[LENGTH], count[LENGTH] = {0};
    for(short i=0; i<LENGTH; i++)
    {
        std::cout << "insert the " << i+1 << " value: ";
        std::cin >> arr[i];
        bool flag = 0;
        for(short j=0; j<i; j++)
        {
            if(arr[j] == arr[i])
            {
                count[j]++;
                count[i] = count[j];
                flag = 1;
            }
        }
        if(!flag)
            count[i]++;
    }
    PrintArray(arr, "array");
    PrintArray(count, "frequencies");
    return 0;
}

void PrintArray(int *arr, std::string name = "")
{
    for(short i=0; i<LENGTH; i++)
    {
        std::cout << ((i==0)?name+" = [":"") << arr[i] << ((i==LENGTH-1)?"]\n":", ") ;
    }
}