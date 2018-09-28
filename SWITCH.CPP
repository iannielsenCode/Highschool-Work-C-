//Student: Ian Nielsen
//File Name: SWITCH.CPP
//Last Updated: February 28th 2011
//I, Ian Nielsen, only got help from Mr.Miskin while working on this program.

#include<iostream>
using namespace std;

int main()
{
    int distance, cost;
    char choice;
    cout << "This program will calcualte the toll for a distance traveled.\n";
    do
    {
         cout << "Enter the distance between 0 and 999:";
         cin >> distance;
         if((distance > 0) && (distance < 100)) //If the distance is from 0 to 99, cost equals 1.
         {
             cost = 1;
         }
         if((distance >= 100) && (distance < 300)) //If distance is from 100 to 299, cost equals 2.
         {
             cost = 2;
         }
         if((distance >= 300) && (distance < 600)) //If distance is from 300 to 599, cost equals 3.
         {
             cost = 3;
         }
         if((distance >=600) && (distance < 1000)) //If distance is from 600 to 999, cost equal 4.
         {
             cost = 4;
         }
         if((distance < 0) || (distance >= 1000)) //If distance is not between 0 and 999, cost equals 5.
         {
             cost = 5;
         }
    switch(cost)
         {
            case 1:
                 cout << "The toll is 5.00.\n";
                 break;
            case 2:
                 cout << "The toll is 8.00.\n";
                 break;
            case 3:
                 cout << "The toll is 10.00.\n";
                 break;
            case 4:
                 cout << "The toll is 12.00.\n";
                 break;
            default:
                 cout << "The distance is out of range.\n";
                 break;
          } 
          cout << "Do you want to do this again?(y or n):";
          cin >> choice;
    }while((choice == 'y') || (choice == 'Y')); //As long as the user enters yes, the program will repeat.
    
    system("pause");
    return 0;
}
    
