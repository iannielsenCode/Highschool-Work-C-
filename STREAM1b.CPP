//Student: Ian Nielsen
//File Name: STREAM1b.CPP
//Last Updated: December 2nd 2010
//I, Ian Nielsen, did npt get help from anyone when working on this project.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int number;
    char file[20];
    ifstream integer_input;
    
    
    cout << "Please enter the file you want to use:";
    cin >> file;
    
    integer_input.open("file");
    
    do
    {
        integer_input >> number;
    }while(number == -1); //The program will take the numbers from the file until the number is -1.
    
    
    cout << "The integers from the file are " << number << "\n";
    
    system("pause");
    return 0;
}
