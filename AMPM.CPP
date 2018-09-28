// Student: Ian Nielsen
// File: AMPM.CPP
// Last Updated: November 23rd 2010
// I, Ian Nielsen, did not get any help from anyone when working on this program.

#include<iostream>
using namespace std;

void input(int&, int&);
// The function asks the user for the time in 24-hr notation.
// Precondition: The two variables will be given values of non-negative numbers.
// Postcondition: The variables will be set to the values given.

void conversion(int&, char&);
// The function convert the 12-hour notation into 24-hour notation.
// Precondition: The variables are non-negative numbers.
// Postcondition: The variable int will be changed and the char will be given a value.

void output(int, int, char);
// The function outputs the 12-hour notation time.
// Precondition: The variables are non-negative numbers.
// Postcondition: The variables have been prompted on the screen according to their values.

int main()
{
    int hours, min;
    char AMPM, cont;
    
    do
    {
         input(hours, min);
         conversion(hours, AMPM);
         output(hours, min, AMPM);
         
         cout << "Do you want to do this again?(y or n):";
         cin >> cont;
    }while((cont == 'y') || (cont == 'Y')); // The program will repeat until the user doesn't enter 'y' or 'Y'
    
    system("pause");
    return 0;
}

void input(int& hours, int& min)
{
     cout << "I can convert a time in 24-hour notation to 12-hour notation.\n";
     cout << "Enter the time in 24-hour notation, and press enter after entering both the" << endl << "hours and minutes:";
     cin >> hours;
     while(hours <= 0) //The program will repeat this until the hours is not negative or 0.
     {
              cout << "This value is invalid, try again:";
              cin >> hours;
     }
     cin >> min;
     while(min < 0) //The program will repeat this until the minutes is not negative or 0.
     {
               cout << "This value is invalid, try again:";
               cin >> min;
     }
} 

void conversion(int& hours, char& AMPM)
{
     if (hours < 12) //If the hours entered is smaller than 12 the time is in AM.
     {
               AMPM = 'A';
     }
     else //If the hours is not less than 12 the time is in PM.
     {
            AMPM = 'P';
     }
     
     if (hours > 12) //If the hours is more than 12 the 12-hour notation hours is the original minus 12.
     {
               hours = hours - 12;
     }
     
     if (hours == 0) //If the hours entered is 0 the 12-hour notation hours is 12.
     {
               hours = 12;
     }
}

void output(int hours, int min, char AMPM)
{
     cout << "Your time in 12-hour notation is " << hours << ":" << min << AMPM << endl;
}
     
     
     
