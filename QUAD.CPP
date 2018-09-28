// File Name: Quad.CPP
// Student: Ian Nielsen
// Date Last Updated: October 18th 2010
// I, Ian Nielsen, did not get any help from anyone while making this program.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a_value, b_value, c_value, answer_1, answer_2;
    
    cout << "I can calculate the real number solutions of a quadratic equation.\n";
    cout << "Please enter the value of a in your quadratic equation.\n";
    do
    {
         cin >> a_value;
    if (a_value == 0)
    {
                cout << "Since your a value is 0 your equation is not a quadratic.Please try again.";
    }
    }while (a_value == 0);
    
    cout << "Please enter the value of b in your quadratic equation.\n";
    cin >> b_value;
    cout << "Please enter the value of c in your quadratic equation.\n";
    cin >> c_value;
    
    answer_1 = (-(b_value) + sqrt((b_value * b_value) - ((4) * (a_value) * (c_value)))) / ((2) * (a_value)); // Calculates the value of x by adding.
    answer_2 = (-(b_value) - sqrt((b_value * b_value) - ((4) * (a_value) * (c_value)))) / ((2) * (a_value)); // Calculates the value of x by subtracting.
    
    if ((sqrt((b_value * b_value) - ((4) * (a_value) * (c_value)))) > 0)
    {
                       cout << "The first solution to your equation is " << answer_1 << ".\n";
                       cout << "The second solution to your equation is " << answer_2 << ".\n";
    }
    else
    {
        cout << "The solutions to your equation are not real numbers.\n";
    }
    
    system("pause");
    return 0;
}
    
