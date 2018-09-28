#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include "ADDRESSBOOK.h"
using namespace std;

int main()
{
    AddressBook a;
    Address c;
    char b;
    
    cout << "Welcome to your address book.\n";
    
    do
    {
        cout << "A) Print one address\nB) Determine if a last name is in an address\n"
             << "C) Add an address\nD) Delete an address\nE) Print all last names\n"
             << "F) Print the whole address book\nG) Print one item of an address\nH) Exit\nPlease choose an option:";
         
        cin >> b;
    
        do
        {
        switch(b)
        {
            case'A':
                    a.print_one();
                    break;
            case'B':
                    a.det_lastname();
                    break;
            case'C':
                    cin >> c;
                    a.add(c);
                    break;
            case'D':
                    a.del();
                    break;
            case'E':
                    a.print_lastnames();
                    break;
            case'F':
                    a.print_book();
                    break;
            case'G':
                    a.one_item();
                    break;
            case'H':
                    a.exit_program();
                    break;
            default:
                    cout << "Your option is not valid, try again." << endl;
                    }
        }while((b != 'A') && (b != 'B') && (b != 'C') && (b != 'D') && (b != 'E') && (b != 'F') && (b != 'G') && (b != 'H')); //If the user does not enter a valid option the statement will repeat.
        
        
    }while(b != 'H'); //The program will re[eat until the user decides to quit.
    
    system("pause");
    return 0;
}

    
                
                
    
