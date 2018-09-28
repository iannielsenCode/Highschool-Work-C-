// Student: Ian Nielsen
// File Name: STOCKS.CPP
// Last Updated: November 8th 2010
// I, Ian Nielsen, did not get help from anyone when working on this program.

#include<iostream>
using namespace std;

double to_dec(int,int);
// Converts the fraction portion of the value of the stocks to a decimal.
double add(int,double);
// Adds the whole number and the decimal of the fraction.
double answer(int,double);
// Calculates the value of one stock.

int main()
{
    
    int num_shares, whole_value, num_value, den_value;
    double one_share, decimal, total_value;
    char cont;
    
    do
    {
          cout << "I can tell you what the value of one of your shares of a stock is.\n";
          cout << "Please enter the number of shares of a stock that you have:";
          cin >> num_shares;
          
          while(num_shares < 0) // The program will display an error message until the value is positive or 0.
          {
                           cout << "Your value is invalid, try again:";
                           cin >> num_shares;
          }
          
          cout << "Please enter the whole number portion of the total value of your shares:";
          cin >> whole_value;
          
          while(whole_value < 0) // The program will display an error message until the value is positive or 0.
          {
                            cout << "Your value is invalid, try again:";
                            cin >> whole_value;
          }
          
          cout << "Please enter the numerator of the fraction portion of the total value of your" << endl << "shares:";
          cin >> num_value;
          
          while(num_value < 0) // The program will display an error message until the value is positive or 0.
          {
                          cout << "Your value is invalid, try again:";
                          cin >> num_value;
          }
          
          cout << "Please enter the denominator of the fraction portion of the total value of your shares:";
          cin >> den_value;
          
          while(den_value < 0) // The program will display an error message until the value is positive or 0.
          {
                          cout << "Your value is invalid, try again:";
                          cin >> den_value;
          } 
    
          decimal = to_dec(num_value,den_value);
    
          total_value = add(whole_value,decimal);
    
          one_share = answer(num_shares,total_value);
    
          cout << "The value of one of your shares is: " << one_share << endl;
    
          cout << "Do you want to do this again? (y or n)";
          cin >> cont;
    } while((cont == 'y') || (cont == 'Y')); // The program will repeat until the user does not want to.

    system("pause");
    return 0; 
}

double to_dec(int num_value,int den_value)
{
       double decimal;
       decimal = static_cast<double>(num_value) / den_value;
       return decimal;
}

double add(int whole_value, double decimal)
{
       double total;
       total = whole_value + decimal;
       return total;
}

double answer(int num_shares, double total_value)
{
       double answer;
       answer = num_shares / total_value;
       return answer;
}
    
