//Student: Ian Nielsen
//File Name: CDACLAS1.CPP
//Last Updated: February 14th 2011
//I, Ian Nielsen, only gor help from Mr.Miskin while working on this program.

#include<iostream>
using namespace std;

class CDAccount
{
      public:
             CDAccount();
             //Precondition: None of the variables have been given values.
             //Postcondition: All of the variables have been set to 0.
             CDAccount(double);
             //Precondition: None of the variables have been given values.
             //Postcondition: balance has been given a value, and the rest have been set to 0.
             CDAccount(double, double);
             //Precondition: None of the variables have been given values.
             //Postcondition: balance and interest_rate have been given a value, and term has been set to 0.
             CDAccount(double, double, int);
             //Precondition: None of the variables have been given values.
             //All variables have been given values.
             double initial_balance();
             //Precondition: balance has been given a value.
             //Postcondition: mature balance has been given a value.
             double return_interest();
             //Precondition: interest_rate has been given a value.
             //Postcondition: interest has been given a value.
             double return_term();
             //Precondition: term has been given a value.
             //Postcondition: term has been given a new value.
             void input(istream&);
             //Precondition: All variables have been set to 0.
             //Postcondition: All variables have been given values.
             void output(ostream&);
             //Precondition: term and mature_balance have been given values.
             //Postcondition: their values have been displayed on the screen.
     private:
             double balance;
             double interest_rate;
             double term;
             double interest;
             double fraction;
             double mature_balance;
};
      
int main()
{
    CDAccount account;
    CDAccount(0, 0, 0);
    account.input(cin);
    account.return_term();
    account.return_interest();
    account.initial_balance();
    account.output(cout);
    
    system("pause");
    return 0;
}

void CDAccount::input(istream& in)
{
     cout << "This program will calculate the maturity balance of "
          << "an account with a given \ninterest rate.\n"
          << "Enter the account balance: ";
     in >> balance;
     cout << "Enter account interest rate: ";
     in >> interest_rate;
     cout << "Enter the number of months until maturity\n"
          << "(must be 12 or fewer months): ";
     in >> term;
     while((term < 1) || (term > 12)) //Until the term is in range the program will display an error.
     {
          cout << "The term is out of range, try again:";
          cin >> term;
     }
}

CDAccount::CDAccount()
{
     balance = 0;
     term = 0;
     interest_rate = 0;
}

CDAccount::CDAccount(double a)
{
     balance = a;
     term = 0;
     interest_rate = 0;
}

CDAccount::CDAccount(double a, double b)
{
     balance = a;
     term = 0;
     interest_rate = b;
}

CDAccount::CDAccount(double a, double b, int c)
{
     balance = a;
     interest_rate = b;
     term = c;
}

double CDAccount::return_term()
{
       term = term/12.0;
       return term;
}

double CDAccount::return_interest()
{
       fraction = interest_rate/100.0;
       interest = balance*fraction*term;
       return interest;
}

double CDAccount::initial_balance()
{
       mature_balance = balance + interest;
       return mature_balance;
}

void CDAccount:: output(ostream& out)
{
     out << "When your CD matures in "
         << (term*12) << " months,\n"
         << "it will have a balance of $"
         << mature_balance << endl;
}


       
     
                                                                                                                                                                                                                                                                                                                              
