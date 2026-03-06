// ******************************
// Author: SM
// Programma che effettua l’ordinamento di un array v dato secondo l’algoritmo Insertion Sort.
// ******************************

#include<iostream>
#include<vector>

void insertionSort(std::vector<int> &v);
void swap(int &a, int &b);

int main()
{   
    // input
    const int N = 5;
    std::vector<int> v(N);
    std::cout << "insert " << N << " integers: ";
    for(short i=0; i<N; i++)
        std::cin >> v[i];
    // sort
    insertionSort(v);
    // output
    std::cout << "ordered array: ";
    for(short i=0; i<N; i++)
        std::cout << (i == 0 ? "[" : "") << v[i] << (i == N-1 ? "]\n" : ", "); 

    return 0;
}

void insertionSort(std::vector<int> &v)
{
    for(int i=1; i<(int)v.size(); i++)
    {
        for(int j=i; j>0; j--)
        {
            if(v[j-1]>v[j])
            {
                swap(v[j], v[j-1]);
            }
            else
                break;
        }
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}