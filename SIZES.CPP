// Student: Ian Nielsen
// File Name: SIZES.CPP
// Last Updated On: November 8th 2010
// I, Ian Nielsen, did not get help from anyone while working on this project.

#include<iostream>
using namespace std;

double hat_calc(double, double);
// Calculates the users hat size.

double chest_calc(double, double, int);
// Calculates the users jacket size.

double waist_calc(double, int);
// Calculates the users waist size.

int main()
{
    double height, weight, hat_size, jacket_size, waist_size;
    int age;
    char cont;
    
    do
    {
         cout << "I can tell you your hat jacket and waist size.\n";
         cout << "Please enter your height in inches:";
         cin >> height;
         
         while(height <= 0)
         {
                      cout << "Your value is invalid, try again:";
                      cin >> height;
         }
         
         cout << "Please enter your weight in pounds:";
         cin >> weight;
         
         while(weight <= 0)
         {
                      cout << "Your value is invalid, try again:";
                      cin >> weight;
         }
         
         cout << "Please enter your age in years:";
         cin >> age;
         
         while(age <= 0)
         {
                   cout << "Your value is invalid, try again:";
                   cin >> age;
         }
         
         hat_size = hat_calc(weight, height);
         
         jacket_size = chest_calc(weight, height, age);
         
         waist_size = waist_calc(weight, age);
         
         cout << "Your hat size is " << hat_size << endl;
         cout << "Your jacket size is " << jacket_size << " inches.\n"; 
         cout << "Your waist size is " << waist_size << " inches.\n";
         
         cout << "Do you want to do this again? (y or n)";
         cin >> cont;
    
    }while(cont == 'y' || cont == 'Y'); // The program will repeat until the user does not enter y or Y.
    
    system("pause");
    return 0;
}

double hat_calc(double weight, double height)
{
       double size;
       
       size = (weight / height) * 2.9;
       return size;
}

double chest_calc(double weight, double height, int age)
{
       double size;
       int num;
       
       size = (weight * height) / 288;
       
       if((age > 30) && (age % 10 == 0))
       { 
              num = (age / 10) - 3;
              size = size + (num * (1/8));
       }
       
       return size;
}

double waist_calc(double weight, int age)
{
       double size;
       int num;
       
       size = weight / 5.7;
       
       if((age > 28) && (age % 2 == 0))
       {
               num = (age / 2) - 14;
               size = size + (num * (1/8));
       }
       
       return size;
}

         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
