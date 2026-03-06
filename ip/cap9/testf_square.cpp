// ******************************
// Author: SM
// Funzione void square(int n) con un parametro di tipo intero che stampa un quadrato vuoto con i lati 
// composti di 'x' di dimensioni pari all’argomento. 
// Se l’argomento è negativo o 0 non stampa nulla ma solleva un’eccezione di tipo string con un 
// messaggio "Errore valore < 1"
// ******************************

#include<iostream>
#include<string>

void square(int n);

int main()
{
    int n = 4;
    try
    {
        square(n);
    }
    catch(std::string& msg)
    {
        std::cout << "[EXCEPTION]: " << msg << std::endl;
    }
    return 0;
}

void square(int n)
{
    if(n < 1)
        throw std::string("Errore valore < 1");
    for(int i=0; i<n; i++)
    {
        std::cout << "x ";
    }
    std::cout << std::endl;
    for(int i=1; i<n-1; i++)
    {
        std::cout << "x ";
        for(int j=1; j<n-1; j++)
        {
            std::cout << "  ";    
        }
        std::cout << "x " << std::endl;
    }
    for(int i=0; i<n; i++)
    {
        std::cout << "x ";
    }
    std::cout << std::endl;
}