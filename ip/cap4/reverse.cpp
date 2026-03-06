#include <iostream>
#include <string>
using namespace std;

string array_to_string(int *arr, int length);

int main()
{
    /*
    Scrivere un programma reverse che legge N interi in un array source (vedi leggiArrayInt), e poi copia in un array dest gli
    elementi di source in ordine inverso.
    Quindi stampa source e dest (lasciando una riga vuota in mezzo per chiarezza).
    */
    const int N = 10;

    //read source
    int source[N];
    for(int i=0; i<N; i++)
    {
        std::cout << "inserisci l'elemento numero " << i << ": ";
        std::cin >> source[i];
    }

    //build dest
    int dest[N];
    for(int i=0; i<N; i++)
    {
        dest[i] = source[N-i-1];
    }

    //print results
    std::cout << array_to_string(source, N) << std::endl << array_to_string(dest, N) << std::endl;

    return 0;
}

string array_to_string(int *arr, int length)
{
    string s = "[";
    for(int i=0; i<length; i++)
    {
        s += std::to_string(arr[i]);
        if(i != length-1)
            s += ", ";
    }
    return s + "]";
}