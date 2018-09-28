// Student: Ian Nielsen
// File Name: STREAM1a.CPP
// Last Updated: December 2nd 2010
// I, Ian Nielsen, did not get help from anyone when working on this program.

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    ofstream integer_output;
    char file[20], yn;
    int number;
    
    do
    {
        cout << "Please enter the name of the file being used:";
        cin >> file;
        
        integer_output.open("file");
    
        if(integer_output.fail()) //If the file fails the following will execute.
        {
             cout << "Input file opening failed.\n";
             exit(1);
        }
    
        cout << "Would you like to use this file? (y or n):";
        cin >> yn;
    }while(yn == 'n' || yn == 'n'); //If the user does not want to use the file the program will ask them again.
    
    cout << "Please enter positive integers, and type -1 to stop:";
    
    do
    {
        cin >> number;
        integer_output << number;
    }while(number != -1); //The user will enter numbers until they enter a -1.
    
    integer_output.close();
    
    system("pause");
    return 0;
}
    
        
    
    
    
