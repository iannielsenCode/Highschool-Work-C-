// Student:Ian Nielsen
// File: CALC.CPP

// Last Updated On: October 22 2010
// I, Ian Nielsen, only got help from Mr.Miskin when working on this program.

#include<iostream>
using namespace std;

double add(double, double);
// Adds both of the numbers entered.
double sub(double, double);
// Subtracts both of the numbers entered.
double mult(double, double);
// Multiplied both of the numbers entered.
double div(double, double);
// Divides both of the numbers entered.

int main()
{
    double num_1, num_2, answer;
    char sign, cont;
    
    
    do
    {
    
    cin >> num_1 >> sign >> num_2;
    
    if (sign == '+') // If the operation is addition the program will call to the add function.
    {
             answer = add(num_1, num_2);
             cout << num_1 << sign << num_2 << "=" << answer << endl;
             
    }
    
    else if (sign == '-') // If the operation is subtraction the program will call to the sub function.
    {
             answer = sub(num_1, num_2);
             cout << num_1 << sign << num_2 << "=" << answer << endl;
    }
    
    else if (sign == 'x') // If the operation is multiplication the program will call to the mult function.
    {
             answer = mult(num_1, num_2);
             cout << num_1 << sign << num_2 << "=" << answer << endl;
    }
    
    else if (sign == '/') // If the operation is division the program will call to the div function.
    {
             answer = div(num_1, num_2);
             cout << num_1 << sign << num_2 << "=" << answer << endl;
    }
    
    else // If the operation is invalid then the program will output this.
    {
             cout << "Your operation is invalid, please try again.\n";
    }

    cout << "Do you want to input another expression? (y or n).\n";
    cin >> cont;

    }while (cont == 'y' && 'Y'); // If cont is equal to 'y' or 'Y' the program will ask for another expression
                                // otherwise the program will end.
             
    system("pause");
    return 0;
}
    
double add(double num_1, double num_2)
{
       return (num_1 + num_2);
}

double sub(double num_1, double num_2)
{
       return (num_1 - num_2);
}

double div(double num_1, double num_2)
{
       return (num_1 / num_2);
}

double mult(double num_1, double num_2)
{
       return (num_1 * num_2);
}
       
