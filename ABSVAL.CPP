// Student: Ian Nielsen
//File Name: ABSVAL.CPP
// Last Updated: November 1st 2010
// I, Ian Nielsen, only got help from Mr.Miskin when working on this program.

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int abs_val(int);

double abs_val(double);

long abs_val(long);

int main()
{
    int number_int, ans_int;
    double number_irr, ans_irr;
    long number_long, ans_long;
    char cont;
    
    cout << "I can calculate the absolute value of any integer, long integer, or irrational number.\n";
    
    do
    {
         cout << "Please enter an integer: ";
         cin >> number_int;
         ans_int = abs_val(number_int);
         cout << "The absolute value of your number is: " << ans_int << endl;      
         
         cout << "Please enter an irrational number: ";
         cin >> number_irr;
         ans_irr = abs_val(number_irr);
         cout << "The absolute value of your number is: " << ans_irr << endl;
         
         cout << "Please enter a long integer: ";
         cin >> number_long;
         ans_long = abs_val(number_long);
         cout << "The absolute value of your number is: " << ans_long << endl;
         
         cout << "Do you want to do this again? (y or n)\n";
         cin >> cont;
     }while((cont == 'Y') || (cont == 'y'));
    
    system("pause");
    return 0;
}

int abs_val(int number_int)
{
    return abs(number_int);
}

double abs_val(double number_irr)
{
    return fabs(number_irr);
}

long abs_val(long number_long)
{
     return labs(number_long);
}


         
         
         
            
         
         
         
         
         
         
