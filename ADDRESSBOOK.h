//Student:Ian Nielsen
//File Name: ADDRESSBOOK.dev
//Last Updated: June 20th 2011
//I, Ian Nielsen, did not recieve any help from anyone while working on this program.


#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;


class Address
{
      public:
             Address();
             //Postcondition: All strings are set to a blank string.
             Address(string);
             //Postcondition: The string is set to a specifide string.
             Address(string, string);
             //Postcondition: The strings are set to a specifide string.
             Address(string, string, string);
             //Postcondition: The strings are set to a specifide string.
             Address(string, string, string, string);
             //Postcondition: The strings are set to a specifide string.
             Address(string, string, string, string, string);
             //Postcondition: The strings are set to a specifide string.
             Address(string, string, string, string, string, string);
             //Postcondition: The strings are set to a specifide string.
             friend istream& operator >> (istream& ins, Address& c);
             //Postcondition: The option to an address has been selected.
             //Postcondition: Items for an address have been entered.
             string get_first();
             //Postcondition: The item has been returned.
             string get_last();
             //Postcondition: The item has been returned.
             string get_s_address();
             //Postcondition: The item has been returned.
             string get_city();
             //Postcondition: The item has been returned.
             string get_state();
             //Postcondition: The item has been returned.
             string get_zip();
             //Postcondition: The item has been returned.
      private:
              string first;
              string last;
              string s_address;
              string city;
              string state;
              string zip;
};

class AddressBook
{
      public:
             void one_item();
             //Precondition: The option print one item of an address has been chosen.
             //Postcondition: The item specified has been printed.
             void det_lastname();
             //Precondition: The option to detect a last name has been chosen.
             //Postcondition: The program has been let the user know if there are last names in the book.
             void add(Address&);
             //Precondition: The option to add an address to the book has been chosen.
             //Postcondition: An address has been added to the book.
             void del();
             //Precondition: The option to delete an address to the book has been chosen.
             //Postcondition: An address has been deleted from the book.
             void print_one();
             //Precondition: The option to print an address has been chosen.
             //Postcondition: An address has been printed.
             void print_lastnames();
             //Precondition: The option to print all lastnames has been chosen.
             //Postcondition: All of the last names in the book have been printed.
             void print_book();
             //Precondition: The option to print the whole book has been chosen.
             //Postcondition: The whole book has been printed.
             void exit_program();
             //Precondition: The option to exit the program has been chosen.
             //Postcondition: The program has ended.
      private:
             vector<Address> book;
};
             

