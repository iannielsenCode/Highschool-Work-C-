#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter in any number of positive integers you want. \n";
    cin >> number;
   
    while (number == 0)
    {
          cout << "Enter your next integer.\n";
          cin >> number;
}    
    
    system("pause");
    return 0;
}
          
