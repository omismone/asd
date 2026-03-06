// ******************************
// Author: SM
// Programma che effettua la ricerca dell’elemento item (un intero) nell’array v (array di 15 interi ORDINATI letti da input).
// ******************************

#include<iostream>
#include<vector>

void bubble(std::vector<int> &v);
int binarySearch(std::vector<int> &v, int item);
void swap(int &a, int &b);

int main()
{
    const int N = 15;
    std::vector<int> v(N);
    int item;
    std::cout << "item to search for: ";
    std::cin >> item;

    std::cout << "enter " << N << " items: ";
    for(int i=0; i<N; i++)
        std::cin >> v[i];
    bubble(v);
    int pos = binarySearch(v, item);

    std::cout << "ordered vector: ";
    for(int i=0; i<N; i++)
        std::cout << ((i==0)?"[":"") << v[i] << ((i==N-1)?"]\n":", ");
    
    if(pos != -1)
        std::cout << "item found, new position: " << pos << std::endl;
    else
        std::cout << "item not found" << std::endl;

    return 0;
}


void bubble(std::vector<int> &v)
{
    for(int i=0; i<(int)v.size(); i++)
    {
        for(int j=0; j<(int)v.size()-i-1; j++)
        {
            if(v[j]>v[j+1])
                swap(v[j], v[j+1]);
        }
    }
}


int binarySearch(std::vector<int> &v, int item)
{
    int first = 0, last = (int)v.size()-1;
    while(first <= last)
    {
        int middle = (first + last) / 2;
        if(v[middle] == item)
            return middle;
        if(item >= v[middle])
            first = middle + 1;
        else
            last = middle - 1;
    }
    return -1;
}

void swap(int &a, int &b)
{
    a ^= b;
    b = a ^ b;
    a ^= b;
}