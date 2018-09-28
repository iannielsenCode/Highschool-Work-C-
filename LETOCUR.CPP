//Student: Ian Nielsen
//File Name: LETOCUR.CPP
//Last Updated: May 17th 2011
//I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>
using namespace std;

struct List
{
    char letter;
    int num;
};

void enter(List[], int&);
//Postcondition: The line of text has been given.

void occur(List[], int&);
//Precondition: The line of text has been given.
//Postcondition: The number of occurrences for each letter has been found and printed.

int main()
{
    List a[80];
    int counter(0);
    
    enter(a, counter);
    occur(a, counter);
    
    system("pause");
    return 0;
}

void enter(List a[], int& counter)
{
    cout << "Enter a line of text (end with a period):";
    for(int i = 0;i <= 80;i++)
    {
        cin.get(a[i].letter);
        if(a[i].letter == ' ') //If letter is a space, array is one less.
        {
            counter--;
            i--;
        }
        if(a[i].letter == '.')//If letter is a period the loop will end.
        {
            i--;
            counter --;
            break;
        }
        counter++;
    }
}

void occur(List a[], int& counter)
{
    cout << "Letter    Number of Occurences\n";
    for(int i = 0; i < counter - 1; i++)
    {
        for(int j = i + 1; j < counter;j++)
        {
            if(a[i].letter == a[j].letter) //If letters are the same, occurences for both increase.
            {
                a[i].num++;
                a[j].num++;
            }
        }
    a[i].num++;
    }
    a[counter-1].num++;
    for(int i = 0;i < counter - 1;i++)
    {
        for(int j = i + 1;j < counter;j++)
        {
            if(a[i].letter == a[j].letter) //If the letters are the same, letter and num wil be printed.
               {
                    cout << a[i].letter << "         " << a[j].num << "\n";
                    break;
               }
        }
    }
}
