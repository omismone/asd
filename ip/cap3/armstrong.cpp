#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    /*
    Scrivere un programma che verifica se un numero intero positivo dato in input è un numero di Armstrong. 
    */
   
    int n;
   
    std::cout << "insert a positive integer: ";
    std::cin >> n;

    if(n < 0)
    {
        std::cerr << "[error] insert a valid number";
        return 1;
    }

    string s = to_string(n);
    int count = 0;
    for(long unsigned int i=0; i<s.length(); i++)
    {
        count += pow(stoi(s.substr(i,1)), s.length());
    }

    string res = count == n ? "it is an armstrong number!" : "it is not an armstrong number!";
    cout << res << std::endl;

    return 0;
}