#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include "ADDRESSBOOK.h"
using namespace std;

Address::Address()
{
    first = "";
    last = "";
    s_address= "";
    city = "";
    state = "";
    zip= "";
}

Address::Address(string a)
{
    first = a;
    last = "";
    s_address= "";
    city = "";
    state = "";
    zip= "";
}

Address::Address(string a, string b)
{
    first = a;
    last = b;
    s_address= "";
    city = "";
    state = "";
    zip= "";
}

Address::Address(string a, string b, string c)
{
    first = a;
    last = b;
    s_address= c;
    city = "";
    state = "";
    zip= "";
}

Address::Address(string a, string b, string c, string d)
{
    first = a;
    last = b;
    s_address= c;
    city = d;
    state = "";
    zip= "";
}

Address::Address(string a, string b, string c, string d, string e)
{
    first = a;
    last = b;
    s_address= c;
    city = d;
    state = e;
    zip= "";
}

Address::Address(string a, string b, string c, string d, string e, string f)
{
    first = a;
    last = b;
    s_address= c;
    city = d;
    state = e;
    zip= f;
}
void AddressBook::print_one()
{
     int num;
     string total = "";
     char comma[20] = ",", space[20] = " ", next_line[20] = "\n";
     
     cout << "Which number address do you want to print?:";
     cin >> num;
     total = book[num-1].get_last();
     total.append(comma);
     total.append(space);
     total.append(book[num -1].get_first());
     total.append(next_line);
     total.append(book[num -1].get_s_address());
     total.append(next_line);
     total.append(book[num -1].get_city());
     total.append(comma);
     total.append(space);
     total.append(book[num -1].get_state());
     total.append(next_line);
     total.append(book[num -1].get_zip());
     
     cout << total << endl;
}

string Address::get_first()
{
       return first;
}

string Address::get_last()
{
       return last;
}

string Address::get_s_address()
{
       return s_address;
}

string Address::get_city()
{
       return city;
}

string Address::get_state()
{
       return state;
}

string Address::get_zip()
{
       return zip;
}

void AddressBook::det_lastname()
{
     int num;
     string s1;
     
     cout << "Which number address do you want to check for a last name?:";
     cin >> num;
     
     s1 = book[num-1].get_last();
     
     if(s1.empty()) //If the book has no lastnames then the program will print the following.
     {
         cout << "The address does not have a last name at this time.\n";
     }
     else
     {
         cout << "The address includes a last name.\n";
     }
}

istream& operator >> (istream& ins, Address& c)
{
    cout << "Enter your first name:";
    ins >> c.first;
    cout << "Enter your last name:";
    ins >> c.last;
    cout << "Enter your street address:";
    ins.get();
    getline(ins,c.s_address);
    cout << "Enter your city:";
    ins >> c.city;
    cout << "Enter your state:";
    ins >> c.state;
    cout << "Enter your zip code:";
    ins >> c.zip;
    
    return ins;
}

void AddressBook::add(Address& c)
{
     book.push_back(c);
}

void AddressBook::del()
{
     int num;
     
     cout << "Which number address do you want to delete?:";
     cin >> num;
     book.erase(book.begin());
}

void AddressBook::print_lastnames()
{
     cout << "The last names in the address book are:\n";
     for(int i = 0; i <= book.size(); i++)
     {
         cout << book[i].get_last() << " ";
         if(i > book.size())
         {
              break;
         }
     }
}

void AddressBook::print_book()
{
     char comma[20] = ",", space[20] = " ", next_line[20] = "\n";
     string total = "";
     for(int num = 0; num <= book.size(); num++)
     {
        total = "";
        total = book[num].get_last();
        total.append(comma);
        total.append(space);
        total.append(book[num].get_first());
        total.append(next_line);
        total.append(book[num].get_s_address());
        total.append(next_line);
        total.append(book[num].get_city());
        total.append(comma);
        total.append(space);
        total.append(book[num].get_state());
        total.append(next_line);
        total.append(book[num].get_zip());
     
        cout << total << endl;
     }
}

void AddressBook::one_item()
{
     int num;
     char choice;
     
     cout << "Which number address do you want to know an item from?:";
     cin >> num;
     cout << "A) First name\nB) Last name\nC) Street Address\nD) City\nE) State\nF) Zip code\n";
     cout << "What item do you want to know from the address?:";
     cin >> choice;
     do
     {
         switch(choice)
         {
             case'A':
                     cout << "The first name of the address is " << book[num-1].get_first() << ".\n";
                     break;
             case'B':
                     cout << "The last name of the address is " << book[num-1].get_last() << ".\n";
                     break;
             case'C':
                     cout << "The street address of the address is " << book[num-1].get_s_address() << ".\n";
                     break;
             case'D':
                     cout << "The city of the address is " << book[num-1].get_city() << ".\n";
                     break;
             case'E':
                     cout << "The state of the address is " << book[num-1].get_state() << ".\n";
                     break;
             case'F':
                     cout << "The zip code of the address is " << book[num-1].get_zip() << ".\n";
                     break;
             default:
                     cout << "Your option is not valid, try again:";
                     cin >> choice;
         }
     }while((choice != 'A') && (choice != 'B') && (choice != 'C') && (choice != 'D') && (choice!= 'E') && (choice != 'F')); //If the user does not enter a valid option the statement will repeat.
}

void AddressBook::exit_program()
{
     exit(1);
}




         
         
