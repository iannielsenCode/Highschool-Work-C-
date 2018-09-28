//Student: Ian Nielsen
//File Name: TESTLIST.CPP
//Last Updated: May 3rd 2011
//I, Ian Nielsen, got help from only Mr.Miskin while working on this program.

#include <iostream>
#include "TESTFILE.h"
using namespace std;

int main()
{
     List a(0);
     char choice, b;
     
     cout << "This program will allow you to manage a list of numbers.\n";
     
     a.read();
     
     do
     {
         cout << "A)Add number\nB)Delete last number\nC)Print last number\nD)Print current list\nE)Exit\n"
              << "What do you want to do with the list?:";
         cin >> b;
         
         switch(b)
         {
             case 'A':
             {
                 a.add();
                 break;
             }
             case 'B':
             {
                 a.del();
                 break;
             }
             case 'C':
             {
                 a.last();
                 break;
             }
             case 'D':
             {
                 a.print();
                 break;
             }
             case 'E':
             {
                 exit(1);
             }
             default:
             {
                 cout << "There was an error.\n";
             }
         }
     }while((b != 'E') || (b != 'e')); //Program will repeat until user chooses to exit.
     
     system("pause");
     return 0;
}
             
             
             
         
