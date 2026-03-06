#include <iostream>

int main()
{
    /*
    Scrivere un programma che legge due numeri e li stampa in ordine crescente
    senza confrontarli. Il programma deve esserescritto in un file chiamato 
    sorttwo.cpp.
    */
    float a, b;
    std::cout << "insert a: ";
    std::cin >> a;
    std::cout << "insert b: ";
    std::cin >> b;

    float m = (a + b)/2;
    float s = std::abs(a - b)/2;

    std::cout << m - s << ", " << m + s << std::endl;
    
    return 0;
}