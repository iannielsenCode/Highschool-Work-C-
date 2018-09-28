//Name: Ian Nielsen
//File Name: DIAMONDS.CPP
//Last Updated: March 8th 2011
//I, Ian Nielsen, got help from only Mr.Miskin while working on this program.

#include<iostream>
using namespace std;

int main()
{
    int num, count;
    char choice;
    cout << "This program will ask you for the width ofa diamond and print out "
         << "the diamond.\n";
    count = 1;
    do
    {
        cout << "What is the width of the diamond(must be an odd integer):";
        cin >> num;
        while(num % 2 == 0) //The program will display an error until the entered number is odd.
        {
            cout << "Number is not odd, try again:";
            cin >> num;
        }
        
        for(int i=num ; i>0 ; i-=2)
        {
            for(int spaces = i/2 ; spaces > 0 ; spaces--)
            {
                cout << " ";
            }
            for(int stars = 1 ; stars <= num-(i-1) ; stars++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for(int i=num ; i>0 ; i-=2)
        {
            for(int spaces = num - (num - count); spaces > 0 ; spaces--)
            {
                cout << " ";
            }
            for(int stars = num - 2 ; stars >= num-(i-1) ; stars--)
            {
                cout << "*";
            }
            count++;
            cout << endl;
        }
        cout << "Do you want to do this again?(y or n):";
        cin >> choice;
    }while((choice == 'y') || (choice == 'Y')); //Until the user chooses no, the program will continue.
    
    system("pause");
    return 0;
}






