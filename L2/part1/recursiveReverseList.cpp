// ******************************
// Author: SM
// Programma che inverte una lista.
// ******************************

#include<iostream>

struct cell {
    int info;
    cell* next;
};

typedef cell* list;

void insert(list& l, int item);
void print(list &l);
void reverse(list& l);

int main()
{
    list l = nullptr;
    insert(l, 1);
    insert(l, 2);
    insert(l, 3);
    insert(l, 4);
    insert(l, 5);

    std::cout << "before: ";
    print(l);

    reverse(l);
    
    std::cout << "after: ";
    print(l);
    return 0;
}

void insert(list& l, int item)
{
     if(l == nullptr)
     {
        cell* new_cell = new cell;
        new_cell->info = item;
        new_cell->next = nullptr;
        l = new_cell;
        return;
     }
     else if(l->next == nullptr)
     {
        cell* new_cell = new cell;
        new_cell->info = item;
        new_cell->next = nullptr;
        l->next = new_cell;
     }     
     else insert(l->next, item);

}

void print(list& l)
{
    if(l == nullptr)  return;
    if(l->next == nullptr) std::cout << l->info << std::endl;
    else std::cout << l->info << " ";
    print(l->next);
}

void reverse(list& l)
{
    if(l == nullptr || l->next == nullptr) return;
    list l1 = l->next;
    reverse(l1);
    l->next->next = l;
    l->next = nullptr;
    l = l1;
}