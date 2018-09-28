//Student: Ian Nielsen
//File Name: NUMLS.CPP
//Last Updated: December 23rd 2010
//I, Ian Nielsen, did not get any help from anybody while working on this program.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream into;
    int num, largest, largest_2, smallest, smallest_2;
    
    cout << "I will take the integers from the file NUMLS.DAT and display its "
         << "smallest and \nlargest number.\n";
    into.open("NUMLS.DAT");
    
    largest_2 = 0;
    smallest_2 = 0;     
   
    do
    {
        into >> num;
        if(num > largest_2) //If the number taken is less than the previous 
        {                   // largest number the following will happen.
            largest = num;
            smallest = largest_2;
            if(smallest < smallest_2); //If the new smallest number is smaller 
            {                          //than the previous smallest number than the following will happen.
                smallest_2 = smallest;
            }
        }
        if(num < largest_2) //If the number taken is smaller than the previous 
        {                   //biggest number than the following will happen.
            if(num < smallest) //If the number taken is smaller then the previous 
            {                  //smaller number than the following will happen.
                smallest = num;
            }
        }
        
        largest_2 = largest;
    }while(!into.eof()); //The loop will continue until the file ends.
    
    into.close();
    
    cout << "The biggest number is " << largest_2 << ".\n"
         << "The smallest number is " << smallest << ".\n";
    
    system("pause");
    return 0;
}
