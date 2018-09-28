//Ian Nielsen
// Chapter 2 Programming Project : DISCLOAN.CPP
// October 13 2010
// I, Ian Nielsen did not get any help from anyone when working on this program.

#include<iostream>
using namespace std;

int main()
{
    int loan, duration_months;
    double interest_rate, interest, total_interest_owed, monthly_payment, duration_years, new_face_value;
    
    cout << "I can calculate the face value of a loan that is required for you to get an amount needed.\n";
    
    do
    {
          cout << "Enter the amount of the loan, or enter 0 to quit.\n";
          cin >> loan;
          cout << "Enter the interest rate as a decimal.\n";
          cin >> interest_rate;
          cout << "Enter the duration of the loan in months.\n";
          cin >> duration_months;
          
          duration_years = (duration_months / 12) + (duration_months % 12); //Calculation for the years of the loan.
          total_interest_owed = (loan * (interest_rate)) * duration_years; // Calculation for the total interest of the loan.
          new_face_value = loan - total_interest_owed; //Calculation for the new value of the loan including interest.
          monthly_payment = (loan / duration_months) + (loan % duration_months); //Calculation for the monthly payment of the loan.
          
          cout << "The face value required in order to recieve the amount needed is " << new_face_value << ".\n";
          cout << "The monthly payment is " << monthly_payment << ".\n";
    }     while (loan != 0); //Repeats the above until the user enters the loan amount as 0.
    
    system("pause");
    return 0;
}
