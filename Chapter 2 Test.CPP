#include <iostream>
using namespace std;

int main ()
{
    int number, sum(0);
    
    cout << "I will sum the squares of integers until you enter a 0 or less.";
    cout << endl;
    cout << "Please enter some integers:";
    cout << endl;
     
    while (number > 0)
    {
          cin >> number;
          sum = (number * number) + sum;
          if (number <= 0)
          sum = sum - abs(number*number);
    }
    
    cout << "The total is:" << sum;
    cout << endl;
    
    system("pause");
    return 0;
}
