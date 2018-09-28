/*
  Name: 2INTS 
  Author: Ian Nielsen
  Date: 02/07/11 10:52
*/

#include <iostream>
using namespace std;

void enter(int&, int&);
//Precondition: The enter function was called.
//Postcondition: The two user entered two integers.

int add(int, int);
//Precondition: The add function was called.
//Postcondition: The sum of the two integers was returned.

int sub(int, int);
//Precondition: The sub function was called.
//Postcondition: The difference of the two integers was returned.

int mult(int, int);
//Precondition: The mult function was called.
//Postcondition: The product of the two integers was returned.

void div(int, int, double&);
//Precondition: The div function was called.
//Postcondition: The quotient of the two integers was returned.

int remain(int, int);
//Precondition: The remain function was called.
//Postcondition: The remainder of the two integers was found.

double avg(int, int);
//Precondition: The avg function was called.
//Postcondition: The average of the two integers was found.

int main()
{
    int first, second, sum, dif, prod, rem;
    double quo, aver;

    cout << "Basic arithmetic for two integers.\n"; 
    enter(first, second);
    sum = add(first, second);
    dif = sub(first, second);
    prod = mult(first, second);
    div(first, second, quo);
    aver = avg(first, second);
    
    cout << "The sum of the two integers is " << sum << ".\n";
    cout << "The difference of the two integers is " << dif << ".\n";
    cout << "The product of the two integers is " << prod << ".\n";
    cout << "The quotient of the two integers is " << quo << ".\n";
    rem = remain(first, second); 
    cout << "The remainder of the quotient is " << rem << ".\n";
    cout << "The average of the two integers is " << aver << ".\n";
    
    system("pause");
    return 0;
}

void enter(int& first, int& second)
{
     cout << "Type in your first integer:";
     cin >> first;
     cout << "Type in your second integer:";
     cin >> second;
}

int add(int first, int second)
{
    int a;
    a = first + second;
    return a;
}

int sub(int first, int second)
{
    int a;
    a = first - second;
    return a;
}

int mult(int first, int second)
{
    int a;
    a = first * second;
    return a;
}

void div(int first, int second, double& quo)
{
    int a;
    double b, c;
    c = second;
    a = first % second;
    quo = first / second;
    b = a / c;
    quo = b + quo;
}

int remain(int first, int second)
{
    int a;
    if(first > second)
    {
       a = first % second;
    }
    else
    {
        cout << "d";
    return a;
}

double avg(int first, int second)
{
    double a;
    a = (first + second) / 2;
    if(((first % 2) == 0) || ((second % 2) == 0)) //If one number is even, add .5 to remainder.
    {
               a = a + .5;
    }
    return a;
}
