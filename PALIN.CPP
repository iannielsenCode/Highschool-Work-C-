//Student: Ian Nielsen
//File Name: PALIN.CPP
//Last Updated: April 6th 2011
//I, Ian Nielsen, go help from onyl Mr.Miskin while working on this program.

#include<iostream>
using namespace std;

void palindrome(char[], int);
//Precondition: The string of characters has been entered.
//Postcondition: The program has displayed whether the string is a palindrome or not.

int main()
{
    char string[80];
    int counter(0);
    
    cout << "This program will determine if your string is a palindrome.\n"
         << "Enter a string of characters:";
    
    for(int i = 0; i < 80; i++) //Until the user presses enter the program will continue to take in a string.
    {    
         cin.get(string[i]);    
         if(string[i] == '\n') //If the user presses enter, the loop will end.
         {
             break;
         }
         counter++;
    }
    
    palindrome(string, counter);
    
    system("pause");
    return 0;
}

void palindrome(char string[], int counter)
{
     int j(0);
     
     for(int i = 0; i < counter; i++) //The program will print out the string until it is less than the number of characters entered.
     {
         cout << string[i];
     }
     
     cout << " is ";
     
     for(int i = 0; i < (counter-1-j) ; i++, j++) //Check for palindrome.
     {
         if(string[i] != string[counter - 1 - j]) //Check for equality.
         {
             cout << "not ";
             break;
         }
     }
     
     cout << "a palindrome.\n";
}
