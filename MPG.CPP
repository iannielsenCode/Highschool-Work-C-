
// Student: Ian Nielsen
// File Name: MPG.CPP
// Date Last Updated: October 23rd 2010
// I, Ian Nielsen, did not get any help from anyone when working on this program.

#include<iostream>
using namespace std;

const double l_per_g = 0.264179;

double lit_to_gal(double, double);
// This function converts the number of liters to gallons.

double mpg(double, double);
// This function calculates how many miles they frove using one gallon.

int main()
{
    double liters, miles, gallons, m_per_g;
    char cont;
    
    do
    {
          cout << "I can tell you how many miles per gallon of gas your car can drive.\n";
          cout << "Type in how many liters of gas you used:";
          cin >> liters;
          cout << "Type in how many miles you drove:";
          cin >> miles;
          cout << endl;
          
          gallons = lit_to_gal(liters, l_per_g);
          
          m_per_g = mpg(miles, gallons);
          
          cout << "Your car drives " << m_per_g << " miles per every gallon of gas.\n";
          cout << "Do you want to do this again? (y or n)\n";
          cin >> cont;
     }while (cont == ('y' && 'Y')); 
     
     system("pause");
     return 0;
}
          
double lit_to_gal(double liters, double l_per_g)
{
       double gallons;
       
       gallons = liters / l_per_g;
       return (gallons);
}
          
double mpg(double miles, double gallons)
{
       double m_per_g;
       
       m_per_g = miles / gallons;
       return (m_per_g);
}         
