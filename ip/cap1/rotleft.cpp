#include<iostream>

int main()
{
    /*
    Scrivere un programma che scambia in maniera circolare “verso sinistra” i valori di tre variabili di tipo float, 
    lette da input, e stampa i valori prima e dopo lo scambio.
    */

    float a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "[BEFORE] a: " << a << ", b: " << b << ", c: " << c << std::endl;

    float tmp = a;
    a = b;
    b = c;
    c = tmp;
    std::cout << "[AFTER] a: " << a << ", b: " << b << ", c: " << c << std::endl;
    return 0;
}