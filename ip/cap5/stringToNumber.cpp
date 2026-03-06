// ******************************
// Author: SM
//  Scrivere un programma che chiede all’utente di inserire una stringa che rappresenti un numero positivo, 
//      verificando l’input finché non viene fornito correttamente. Una volta che la stringa è valida, 
//      il programma converte il valore in un numero intero e lo stampa. 
// ******************************

#include<iostream>
#include<string>

int main()
{
    std::string s, numbers = "0123456789";
    bool flag = false;
    while(!flag)
    {
        std::cout << "insert a positive number: ";
        std::getline(std::cin, s);
        flag = true;
        for(int i=0; i<(int)s.length(); i++)
        {
            if(numbers.find(s[i]) == std::string::npos)
            {
                std::cout << "invalid number" << std::endl;
                flag = false;
                break;
            }
        }
    }
    std::cout << "valid number: " << std::stoi(s) << std::endl;
    return 0;
}