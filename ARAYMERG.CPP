//Student: Ian Nielsen
//File Name: ARAYMERG.CPP
//Last Updated: March 27th 2011
//I, Ian Nielsen, did not recieve help from anyone while working on this program.

#include<iostream>
using namespace std;

void instructions();
//Postcondition: The instructions have been displayed on the screen.

void first(char[], int&);
//Precondition: The instructions have been displayed on the screen.
//Postcondition: The user has entered the first string of numbers.

void second(char[], int&);
//Precondition: The user has entered the first string.
//Postcondition: The user has entered the second string.

void merge(char[], char[], char[], int&);
//Precondition: The user has entered the second string.
//Postcondition: The strings have been merged.

void print(char[], int&);
//Precondition: The arrays have been merged.
//Postcondition: The new array has been printed

int main()
{
    char string1[20], string2[20], string3[20];
    int counter(0);
    
    instructions();
    first(string1, counter);
    second(string2, counter);
    merge(string1, string2, string3, counter);
    
    system("pause");
    return 0;
}

void instructions()
{    
     cout << "This program will take in two strings of integers and combine the two in order\nfrom "            
          << "smallest to largest.\n";
}

void first(char string1[], int& counter)
{    
     cout << "Enter the first string of integers:";    
     for(int i = 0; i < 20; i++)    
     {        
              cin.get(string1[i]);        
              if(string1[i] == '\n')        
              {             
                  string1[i] = -1;
                  break;        
              }        
              counter++;
     }
}

void second(char string2[], int& counter)
{ 
     cout << "Enter the first string of integers:";    
     for(int i = 0; i < 81; i++)    
     {        
              cin.get(string2[i]);        
              if(string2[i] == '\n')  
              {             
                   string2[i] = -1;
                   break;        
              }        
              counter++;
     }
}

void merge(char string1[], char string2[], char string3[], int& counter)
{ 
     for(int i = 0, j = 0, k = 0; k <= counter; k++)    
     {       
         if(string1[i] < string2[j])        
         {            
             if(string1[i] == -1)
             {
                 print(string3, counter);
                 for(;j <= counter - k; j++)
                 {
                     cout << string2[j];
                 }
                 break;
             }
             string3[k] = string1[i];                     
             i++;   
         }     
         else 
         {            
             if(string2[j] == -1)
             {
                 print(string3, counter);
                 for(;i <= counter - k; i++)
                 {
                     cout << string1[i];
                 }
                 
                 break;
             }
             string3[k] = string2[j];            
             j++;         
             
         }
     }
     cout << endl;  
}

void print(char string3[], int& counter)
{    
     cout << "The new string is: ";    
     for(int i = 0; i < counter ; i++)         
     {                      
         cout << string3[i];                              
     }     
}
 
    
