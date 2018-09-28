#include <iostream>
using namespace std;

int main()
{
    int total_price, number_of_cds, total_price_of_one_cd;
    
    cout << "Hello.\n";
    cout << "Press enter after entering a number.\n";
    cout << "Enter number of cds.\n";
    cin >> number_of_cds;
    cout << "Enter price of one cd.\n";
    cin >> total_price_of_one_cd;
    
    total_price = number_of_cds * total_price_of_one_cd;  
    
    cout << "If you have ";
    cout << number_of_cds;
    cout << " cds, and the price per cd is ";
    cout << total_price_of_one_cd;
    cout << " then your total price is ";
    cout << total_price; 
    cout << " dollars.\n";
    system("pause");
    cout << "Good-bye";
    
    return 0;
}
