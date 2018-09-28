#include <iostream>
using namespace std;

int main()
{
    int number, ones_digit, new_number;
    
    cout << "I can tell if a number is divisible by eleven.\n";
    cout << "Please enter a positive integer no bigger than 2,000,000.\n";
    cin >> number;
    
    while (number > 11)
    {
          new_number = number / 10;
          ones_digit = number % 10;
          number = new_number - ones_digit;
          cout << number;
          cout << endl;
    if (number < 100)
    {
          number = number + 11;
    }
    }
    
    if (number == 11)
    {
          cout << "Your number is divisible by 11.\n";
    }
    else
    {
          cout << "Your number is not divisible by 11.\n";
    }
    
    system("pause");
    return 0;
}
