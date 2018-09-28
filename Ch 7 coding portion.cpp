#include<iostream>
using namespace std;

char winner(char, char);

int main()
{
    char first, second, letter, choice;
    
    cout << "Rock-paper-scissors game" << endl
         << "Rules: " << endl << "Paper covers Rock"
         << endl << "Rock break Scissors" << endl
         << "Scissors cut Paper\n";
    
    do
    {    
         cout << "First Players Choice:";
         cin >> first;
         cout << "Second Players Choice:";
         cin >> second;
         
         letter = winner(first, second);
         
         switch(letter)
         {
             case 'A':
                  cout << "There was a tie.\n";
                  break;
             case 'B':
                  cout << "The first player is the winner.\n";
                  break;
             case 'C':
                  cout << "The second player is the winner.\n";
                  break;
             default:
                     "The was an error.\n";
         }
         
         cout << "Do you want to do this again?(y or n):";
         cin >> choice;
    }while((choice == 'Y') || (choice == 'y'));              
         
    system("pause");
    return 0;
}

char winner(char first, char second)
{
     if(first == second)
     {
         return 'A';
     }
     if((first == 'P') && (second == 'R'))
     {
         return 'B';
     }
     if((second == 'P') && (first == 'R'))
     {
         return 'C';
     }
     if((first == 'R') && (second == 'S'))
     {
         return 'B';
     }
     if((second == 'R') && (first == 'S'))
     {
         return 'C';
     }
     if((first == 'S') && (second == 'P'))
     {
         return 'B';
     }
     if((second == 'S') && (first == 'P'))
     {
         return 'C';
     }
}
