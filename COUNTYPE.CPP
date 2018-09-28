//Student: Ian Nielsen
//File Name: COUNTYPE.CPP
//Last Updated: February 3rd 2010
//I, Ian Nielsen, did not get any help from anyone while working on this program.

#include<iostream>
using namespace std;

class CountType
{
      public:
             CountType();
             //Precondition: The variable has a value.
             //Postcondition: The variable has been set to a value of 0.
             CountType(int);
             //Precondition: The value has been set to zero.
             //Postcondition: The value has been set to a value specified.
             int increase();
             //Precondition: The variable has been set to a previous value.
             //Postcondition: The variable has been set to a value one more than before.
             int decrease();
             //Precondition: The variable has been set to a previous value.
             //Postcondition: The variable has been set to a value one less than before.
             void print();
             //Precondition: The variable has been set to a value.
             //Postcondition: The value of the variable has been displayed on the screen.
             int set();
             //Precondition: The variable has been given a value.
             //Postcondition: The variable has been given a new value specified by the user.
      private:
              int count;
};

int main()
{
    CountType counter;
    char choice;
    do
    {
              cout << "Pick an option for the integer:\n"
                   << "(a) increase\n"
                   << "(b) decrease\n"
                   << "(c) print\n"
                   << "(d) set\n"
                   << "(e) exit\n";
              cin >> choice;
              if(choice == 'a') //If the user chooses a, increase() will be called.
              {
                        counter.increase();
              }
              if(choice == 'b') //If the user chooses b, decrease() will be called.
              {
                        counter.decrease();
              }
              if(choice == 'c') //If the user chooses c, print() will be called.
              {
                        counter.print();
              }
              if(choice == 'd') //If the user chooses d, set() will be called.
              {
                        counter.set();
              }
    }while(choice != 'e'); //The loop will continue until the user chooses to exit the program.
    
    system("pause");
    return 0;
}

CountType::CountType()
{
    count = 0;
}

CountType::CountType(int a)
{
    count = a;
}

int CountType::increase()
{
    count++;
    return count;
}

int CountType::decrease()
{
    count = count - 1;
    if(count < 0) //If the counter is less than zero it's value will automatically become 0.
    {
             count = 0;
    }
    return count;
}

void CountType::print()
{
     cout << "The value of the integer is " << count << "." << endl;
}

int CountType::set()
{
    int a;
    cout << "Enter a value to set the integer to:";
    cin >> a;
    if(a < 0) //If the counter is less than zero it's value will automatically become 0.
    {
         a = 0;
    }
    count = a;
    return count;
}
    
    
     

