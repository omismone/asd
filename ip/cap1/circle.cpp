#include<iostream>

int main()
{
    /*
    Scrivere un programma che calcola circonferenza e area di un cerchio, dopo aver chiesto e letto i dati necessari. Supponiamo
    π = 3.14. Il programma deve essere scritto in un file chiamato circle.cpp.
    */
    const float PI = 3.14;
    float r;

    std::cout << "insert the radius: ";
    std::cin >> r;

    std::cout << "the area is " << PI * r * r << ", the circumference is " << 2 * PI * r << std::endl;

    return 0;
}