#include "BasicList.h"

int main(int argc, char* argv[])
{
// ifstream my_input("../data/SimpleInput.txt");
// ifstream my_input("../data/empty.txt");
// ifstream my_input("../data/onlyOne.txt");
ifstream my_input("../data/in-1000-ordinati.txt");
// ifstream my_input("../data/wrongInput.txt");

BasicList my_list = emptyList;
readList(my_input, my_list);
printList(cout, my_list);
}
