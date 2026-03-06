#include<iostream>
#include<string>

int main()
{
    /*
    Scrivere un programma che chiede all’utente di inserire numeri interi. Dopo ogni numero inserito 
    chiede all’utente se terminare con l’inserimento (carattere ’n’) o continuare 
    (qualsiasi altro carattere). Finito il ciclo di lettura dei numeri stampa la media dei numeri letti.
    */

    int count = 0;
    float sum = 0;
    std::string buf;
    while(buf!="n")
    {
    std::cout << "insert a number to sum (\'n\' to leave): ";
    std::getline(std::cin, buf);
    if(buf!="n")
    {
        sum += std::stoi(buf);
        count++;
    }
    }
    if(count > 0)
        std::cout << "mean: " << sum/count << std::endl;
    else
        std::cout << "mean: 0" << std::endl;

    return 0;
}