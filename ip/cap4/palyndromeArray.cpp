#include <iostream>
using namespace std;

int main()
{
    /*
    Scrivere un programma che legge un array a e calcola un valore di tipo bool che vale true se l’array è palindromo. Poi stampa
    un messaggio che comunica il risultato all’utente.
    */
    const int N = 5;

    //read source
    int arr[N];
    for(int i=0; i<N; i++)
    {
        std::cout << "inserisci l'elemento numero " << i << ": ";
        std::cin >> arr[i];
    }

    //evaluate palyndromness
    bool palyndrome = true;
    int i = 0;
    while(palyndrome && i<=N/2)
    {
        palyndrome = arr[i] == arr[N-i-1];
        i++;
    }

    std::cout << (palyndrome ? "true" : "false") << std::endl;

    return 0;
}