/*********************************************************************
    Author: Simone Migliazza 7560422
    Program that reverse a vector in a recursive way.
*********************************************************************/

#include<iostream>
#include<stdexcept>
#include<vector>

std::vector<int> reverse(std::vector<int>& v, int starting_index);
void print(const std::vector<int>& v, int starting_index);

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << "before: ";
    print(v, 0);

    std::vector<int> vr = reverse(v, (int)v.size());
    
    std::cout << "after: ";
    print(v, 0);
    
    return 0;
}

std::vector<int> reverse(std::vector<int>& v, int starting_index)
{
    return;
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
