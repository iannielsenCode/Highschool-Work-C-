//Student: Ian Nielsen
//File Name: UNIPRICE.CPP
//Last Updated: March 3rd 2011
//I, Ian Nielsen, did not get any help from anyone while working on this program.

#include<iostream>
using namespace std;

int main()
{
    double price;
    int max, num;
    char choice;
    
    cout << "This program will print a table showing the total price of one item "
             << "to the\nmaximum number of items to be sold.\n";
    do
    {
        cout << "Enter the unit price of one item:";
        cin >> price;
        while(price < 0) //The loop will continue until the price is positive.
        {
            cout << "Invalid price, try again:";
            cin >> price;
        }
        cout << "Enter the maximum number of items to be sold:";
        cin >> max;
        while(max < 0) //The loop will continue until the price is positive.
        {
            cout << "Invalid maximum, try again:";
            cin >> max;
        }
        for(num = 1 ; num <= max ; num++) //The loop will continue until the number of
        {                                 //iterations is more than the maximum number
           price = num * price;           //of items
           cout << num << "---------- $" << price << endl;
           price = price / num;
        }
        cout << "Do you want to do this again?(y or n):";
        cin >> choice;
    }while((choice == 'y') || (choice == 'Y')); //The program will repaeat until the use does not want it to.
    
    system("pause");
    return 0;
}
