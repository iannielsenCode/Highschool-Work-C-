#include <iostream>
#include "TESTFILE.h"
using namespace std;

List::List(int list[])
{
    for(int i = 0;i <= 5; i++)
    {
        list[i] = 0;
    }
}

int List::read()
{
     cout << "Enter the list (6 at the most):";
     for(int i = 0; i < MAX; i++)
     {
         cin.get(list[i]);
         if(list[i] == '\n') //Will continue to input numbers until user presses enter.
         {
             size--;
             break;
         }
         size++;
     }
     return size;
}

int List::add()
{
     if((full()) == true) //Will print out error if list is full.
     {
         cout << "This list is full.\n";
     }
     else
     {
         int a;
         cout << "Enter a number:";
         cin >> a;
         list[size] = a;
         size = size + 1;
     }
     return size;
}

int List::del()
{
     size = size - 1;
     return size;
}

int List::last()
{
     if(size == 0) //Will print out error if list is empty.
     {
         cout << "The list is empty.\n";
     }
     else
     {
         cout << "The last number of the list is " << list[size - 1] << ".\n";
     }
     return size;
}

void List::print()
{
     cout << "The new list is ";
     for(int i = 0; i < size; i++)
     {
         cout << list[i];
     }
     cout << ".\n";
}

bool List::full()
{
     return (size == MAX + 1);
}


