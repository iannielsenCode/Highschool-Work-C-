//Student: Ian Nielsen
//File Name: DELREPTS.CPP
//Last Updated: April 14th 2011
//I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>
using namespace std;

void instructions();
//Postcondition: The instructions have been displayed on the screen.

void enter_word(char[], int&);
//Precondition: The instructions have been displayed on the screen.
//Postcondition: The user has entered their word.

void delete_word(char[], int&);
//Precondition: The user has entered their word.
//Postcondition: All of the repeated letters have been replaced.

void print(char[], int);
//Precondition: The repeated letters in the word have been replaced.
//Postcondition: The new word has been displayed.

int main()
{
    int counter(0);
    char word[81];
    
    instructions();
    enter_word(word, counter);
    delete_word(word, counter);
    print(word, counter);
    
    system("pause");
    return 0;

}

void instructions()
{    
     cout << "This program will delete all of the "            
          << "repeated letters in your word.\n";
}

void enter_word (char word[ ], int& counter)
{    
     cout << "Enter a word:";    
     for(int i = 0; i < 81; i++)    
     {        
              cin.get(word[i]);        
              if(word[i] == '\n')       //User will enter letters until they press enter. 
              {             
                   break;        
              }        
              counter++;
     }
}

void delete_word (char word[], int& counter)
{  
     for(int i=0 ; i < counter; i++)    
     {        
         for(int j = i+1; j < counter; j++)        
         {            
             if(word[j] == word[i]) //Checks for equal letters.
             {            
                 for(int k = j; k < counter; k++)
                 {
                     word[k] = word[k+1];                
                 }
                 counter--;
                 j--;                  
  
             }
         }    
     }    

}

void print (char word[ ], int counter)
{    
     cout << "The new word is ";    
     for(int i = 0; i < counter ; i++)    
     {        
              cout << word [i];        
              cout << "";    
     }
     cout << ".\n";
}
