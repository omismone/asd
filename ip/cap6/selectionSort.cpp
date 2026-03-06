// ******************************
// Author: SM
// Programma che effettua l’ordinamento di un array v dato secondo l’algoritmo Selection Sort.
// ******************************

#include<iostream>
#include<vector>

void selectionSort(std::vector<int> &v);
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
    selectionSort(v);
    // output
    std::cout << "ordered array: ";
    for(short i=0; i<N; i++)
        std::cout << (i == 0 ? "[" : "") << v[i] << (i == N-1 ? "]\n" : ", "); 

    return 0;
}

void selectionSort(std::vector<int> &v)
{
    for(int i=0; i<(int)v.size(); i++)
    {
        int index_min = i;
        for(int j=i+1; j<(int)v.size(); j++)
        {
            if(v[j] < v[index_min])
                index_min = j;
        }
        swap(v[i], v[index_min]);
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}