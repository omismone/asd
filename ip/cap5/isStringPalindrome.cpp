// ******************************
// Author: SM
// Programma che chiede all’utente di inserire una string e stampa se la string è un palindromo o no.
// ******************************

#include<iostream>
#include<string>

int main()
{   
    std::string s;
    std::cout << "insert a string: ";
    std::getline(std::cin, s);
    bool flag = true;
    for(int i=0; i<(int)(s.length()/2); i++)
    {
        if(s[i] != s[s.length()-1-i])
        {
            flag = false;
            break;
        }
    }
    std::cout << (flag ? "the string is palindrome" : "the string is NOT palindrome") << std::endl;
    return 0;
}