/*********************************************************************
    Author: Simone Migliazza 7560422
    Program that compute the product of the first N natural numbers in a recursive way.
*********************************************************************/

#include<iostream>
#include<stdexcept>

int product(int n);

int main()
{
    const int N = 5;
    std::cout << "the product of the first " << N << " natural numbers is " << product(N) << std::endl;
    return 0;
}


int product(int n)
{
    if(n < 0)
        throw std::runtime_error("[ERROR] n must be >= 0");
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return n * product(n-1);
}