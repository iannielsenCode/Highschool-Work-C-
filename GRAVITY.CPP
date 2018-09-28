// Student: Ian Nielsen
// File Name: GRAVITY.CPP
// Last Updated: October 27th 2010
// I, Ian Nielsen did not get help from anyone when writing this program.

#include <iostream>
using namespace std;

const double grav = 0.00000006673;

double force_calc(double, double, double);
// This function calcualtes the gravitational force between two bodies.

int main()
{
    double mass_1, mass_2, distance, force;
    char cont;
    
    do
    {
           cout << "I can calculate the gravitational force between two bodies.\n";
           cout << "Please enter the mass of the first body: ";
           cin >> mass_1;
           while (mass_1 < 0)
           {
                 cout << "Your mass is invalid. Please try again.";
                 cin >> mass_1;
           }
           cout << "Please enter the mass of the second body: ";
           cin >> mass_2;
           while (mass_2 < 0)
           {
                 cout << "Your mass is invalid. Please try again.";
                 cin >> mass_2;
           }
           cout << "Please enter the distance between the two bodies: ";
           cin >> distance;
           while (distance < 0)
           {
                 cout << "Your distance is invalid. Please try again.";
                 cin >> distance;
           }
           
           force = force_calc(mass_1, mass_2, distance);
           
           cout << "The gravitational force between the two bodies is " << force << " dynes.\n";
           cout << "Do you want to do this again? (y or n): ";
           cin >> cont;
   }while ((cont == 'y') || (cont == 'Y'));
   
   system("pause");
   return 0;
}
           
double force_calc(double mass_1, double mass_2, double distance)
{
       double force;
       
       force = ((grav)*(mass_1)*(mass_2))/(distance *distance);
       
       return force;
}
           
           
