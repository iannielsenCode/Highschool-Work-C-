//Student: Ian Nielsen
//File Name: BLACKJACK.cpp
//Last Updated: MArch 16th 2011
//I, Ian Nielsen, got help from no one while working on this program.

#include<iostream>
using namespace std;

int main()
{
    int cards, total, total_1, first_1, second_1, third_1, fourth_1, fifth_1;
    char choice, first, second, third, fourth, fifth;
    
    cout << "This program will score your hand in blackjack.\n";
    cout << "How many cards do you have?:"
    cin >> cards;
    while((cards < 2) || (cards > 5)) //The user will continue to enter the number of cards until it is between 2 and 5.
    {
        cout << "Cards out of range try again:";
        cin >> cards;
    }
    if(cards == 2) //If the number of cards equals 2 then the following will happen.
    {
        cout << "What is your first card?(2-9,t,j,q,k,a):";
        
        while((cards != 2) && (cards !=3) && (cards !=4) && (cards !=5) && (cards !=6) && (cards != 7) && (cards !=8) && (cards !=9) && (cards !='t') && (cards != 'j') && (cards != 'q') && (cards != 'k') && (cards != 'a'))
        {
            cout << "The card type is not valid, try again?:";
            cin 
        cout << "What is your second card?(2-9,t,j,q,k,a):";
        cin >> second;
    }
    else if(cards == 3) //If the number of cards equals 3 then the following will happen.
    {
        cout << "What is your first card?(2-9,t,j,q,k,a):";
        cin >> first;
        cout << "What is your second card?(2-9,t,j,q,k,a):";
        cin >> second;
        cout << "What is your third card?(2-9,t,j,q,k,a):";
        cin >> third;
    }
    else if(cards == 4) //If the number of cards equals 4 then the following will happen.
    { 
        cout << "What is your first card?(2-9,t,j,q,k,a):";
        cin >> first;
        cout << "What is your second card?(2-9,t,j,q,k,a):";
        cin >> second;
        cout << "What is your third card?(2-9,t,j,q,k,a):";
        cin >> third;
        cout << "What is your fourth card?(2-9,t,j,q,k,a):";
        cin >> fourth;
    }
    else if(cards == 5) //If the number of cards equals 5 then the following will happen.
    {
        cout << "What is your first card?(2-9,t,j,q,k,a):";
        cin >> first;
        cout << "What is your second card?(2-9,t,j,q,k,a):";
        cin >> second;
        cout << "What is your third card?(2-9,t,j,q,k,a):";
        cin >> third;
        cout << "What is your fourth card?(2-9,t,j,q,k,a):";
        cin >> fourth;
        cout << "What is your fifth card?(2-9,t,j,q,k,a):
        cin >> fifth;
    }
         
