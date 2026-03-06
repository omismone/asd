#include<iostream>

int main()
{
    /*
    Scrivere un programma che legge un numero intero compreso fra 1 e 12 e stampa il nome del mese corrispondente (1==gennaio. . . ). 
    Implementare usando lo switch. Se il numero non è compreso fra 1 e 12 stampa un messaggio di errore ed esce.
    */

    int n;

    std::cout << "insert a number between 1 and 12: ";
    std::cin >> n;

    switch(n)
    {
        case 1:
            std::cout << "january";
            break;
        case 2:
            std::cout << "february";
            break;

        case 3:
            std::cout << "march";
            break;

        case 4:
            std::cout << "april";
            break;

        case 5:
            std::cout << "may";
            break;

        case 6:
            std::cout << "june";
            break;

        case 7:
            std::cout << "july";
            break;

        case 8:
            std::cout << "august";
            break;

        case 9:
            std::cout << "september";
            break;

        case 10:
            std::cout << "october";
            break;

        case 11:
            std::cout << "november";
            break;

        case 12:
            std::cout << "december";
            break;

        default:
            std::cerr << "[error] insert a valid number";
    }
    std::cout << std::endl;

    return 0;
}