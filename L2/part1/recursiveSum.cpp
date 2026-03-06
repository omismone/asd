/*********************************************************************
    Author: Simone Migliazza 7560422
    Program that sum the first N natural numbers in a recursive way.
*********************************************************************/

#include<iostream>
#include<stdexcept>

int sum(int n);

int main()
{
    const int N = 10;
    std::cout << "the sum of the first " << N << " natural numbers is " << sum(N) << std::endl;
    return 0;
}


int sum(int n)
{
    if(n < 0)
        throw std::runtime_error("[ERROR] n must be >= 0");
    if(n == 0)
        return 0;
    return n + sum(n-1);
}