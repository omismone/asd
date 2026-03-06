// ******************************
// Author: SM
// Programma che effettua la ricerca dell’elemento item (un intero) nell’array v (array di 15 interi letti da input).
// ******************************

#include<iostream>
#include<vector>

int main()
{
    // dichiarare una variabile const int N inizializzata a 15
    const int N = 15;
    // dichiarare una variabile int item
    int item;
    // leggere item da input
    std::cout << "item to search for: ";
    std::cin >> item;
    // dichiarare un array v di N interi
    std::vector<int> v(N); 
    // leggere v da input (vedi esercizi parte precedente)
    std::cout << "enter " << N << " integers:" << std::endl;
    for(int i=0; i<N; i++)
        std::cin >> v[i];
    // dichiarare una variabile int loc e inizializzarla a -1
    int loc = -1;
    // dichiarare una variabile bool found e inizializzarla a false
    bool found  = false;
    /* iterare sugli elementi di v fino a che found diventa true o si è iterato su tutto l'array
    - se il valore alla pos corrente (i) e' uguale a item
    -- assegnare true a found e il valore di i a loc
    */
   for(int i=0; i<N && !found; i++)
   {
        if(v.at(i) == item)
        {
            loc = i;
            found = true;
        }
   }
    // se trovato, scrivere su output: item " è stato trovato in posizione " loc
    // altrimenti scrivere: item " non è stato trovato"
    if(found)
        std::cout << "item found in position " << loc << std::endl;
    else
        std::cout << "item not found" << std::endl;
    return 0;
}
