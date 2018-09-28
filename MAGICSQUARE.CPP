//Student: Ian Nielsen
//File Name: MAGICSQUARE.CPP
//Last Updated: May 9th 2011
//I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>
using namespace std;

const int MAX = 50;

int instructions(int);
//Postcondition: The instructions have been displayed and the user has entered the size of the square.

void square(int[][50], int);
//Precondition: The user has entered the size of the square.
//Postcondition: The magic square has been made.

void print(int[][50], int);
//Precondition: The magic square has been made.
//Postcondition: The magic square has been displayed on the screen.

int main()
{
    int size, a[50][MAX];
    char choice;
    
    do
    {
        size = instructions(size);
        square(a, size);
        print(a, size);
        
        cout << "Do you want to do this again?(y or n):";
        cin >> choice;
    }while((choice == 'y') || (choice == 'Y'));
    
    system("pause");
    return 0;
}

int instructions(int size)
{
    cout << "This program will create a magic square according to the size given.\n"
         << "Enter the number of rows/columns in your square (must be odd):";
    cin >> size;
    while((size % 2) == 0) //If size is even error will be displayed.
    {
        cout << "The size is not odd, try again:";
        cin >> size;
    }
    return size;
}

void square(int a[][MAX], int size)
{
    int i, j, num, size_2;
    
    size_2 = (size * size);
    i = 0;
    j = (size / 2) ;
    a[i][j] = 1;
    
    for(num = 2; num <= size_2; num++)
    {
        i--;
        j++;
        
        for(int k = 1; k <= size_2; k++)
        {
            if(a[i][j] == k)
            {
                i--;
                j--;
                break;
            }
        }
        if(i < 0) //If row becomes negative the number will swing to the first row.
        {
             a[size - 1][j] = num;
             i = size - 1;
        }
        if(j == size) //If column becomes to big then the number will swing to the first column.
        {
             a[i][0] = num;
             j = 0;
        }
        
        a[i][j] = num;
    }
}

void print(int a[][MAX], int size)
{
     for(int i = 0; i <= (size - 1); i++)
     {
         for(int j = 0; j <= (size - 1); j++)
         {
             cout << a[i][j];
             cout << " ";
         }
         cout << endl;
     } 
}
         
