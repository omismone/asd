/*********************************************************************
    Author: Simone Migliazza 7560422
    Program that print an array in a recursive way.
*********************************************************************/

#include<iostream>
#include<stdexcept>
#include<vector>

void print(const std::vector<int>& v, int starting_index);

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    print(v, 0);
    return 0;
}

void print(const std::vector<int>& v, int starting_index)
{
    if(starting_index == (int)v.size())
    {
        std::cout << std::endl;
        return;
    }
    std::cout << v.at(starting_index) << " ";
    print(v, starting_index + 1);
}

