// Student: Ian Nielsen
// File Name: MEASUREMENTS.CPP
// Last Updated: November 12th 2010
// I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>

void input(int&, int&);
// Takes two values the user enters.

void conversion_feet(int);
// Converts feet to meters.

void conversion_inches(int);
// Converts inches to centimeters.

void output(double, double);
// Outputs the new values.

int main()
{
    using namespace std;
    
    int feet, inches;
    double cent, meters;
    char cont;
   
    do
    {
          input(feet, inches);
          conversion_feet(feet);
          conversion_inches(inches);
          output(meters, cent);
          
          cout << "Do you want to do this again? (y or n):";
          cin >> cont;
    }while ((cont == 'Y') || (cont == 'y')); // Program will repeat until the user does not enter yes.
    
    system("pause");
    return 0;
}

void input(int& feet, int& inches)
{
     using namespace std;
     
     cout << "I can convert a length of feet and inches to meters and centimeters.\n";
     cout << "Please enter the number of feet of the length:";
     cin >> feet;
     
     while(feet < 0) // The program will prompt an error if the value of feet is negative.
     {
                cout << "Your number is invalid, please try again:";
                cin >> feet;
     }
     cout << "Please enter the extra number of inches in your length:";
     cin >> inches;
     
     while(inches < 0) // The program will prompt an error if the value of feet is negative.
     {
                cout << "Your number is invalid, please try again:";
                cin >> inches;
     }
}

void conversion_feet(int feet)
{
     double meters;
     
     meters = 0.3048 * feet;
}

void conversion_inches(int inches) 
{
     double cent;
     
     static_cast<double>(inches);
     cent = (((inches / 12) * 0.3048) * 100);
}

void output(double meters, double cent)
{
     using namespace std;
     
     cout << "Your length in meters and centimeters is " << meters << " meters and " << cent << " centimeters.\n";
}
             
     
     
     
