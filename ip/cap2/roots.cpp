#include<iostream>
#include<cmath>

int main()
{
    /*
    Scrivere un programma che prende in input tre numeri reali, a, b e c e stampa le radici 
    dell’equazione di secondo grado ax2 + bx + c. Attenzione alle radici immaginarie.
    */
    double a, b, c, x1, x2, delta;
    std::cin >> a >> b >> c;
    
    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    if(delta >= 0)
        std::cout << "x1: " << x1 << ", x2: " << x2 << std::endl; 
    else
        std::cout << "no solution exists\n";
    return 0;
}