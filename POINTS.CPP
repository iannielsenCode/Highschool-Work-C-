//Student: Ian Nielsen
//File Name: POINTS.CPP
//Last Updated: March 22nd 2011
//I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>
#include<cmath>
using namespace std;

void exit();
//Precondition: The user has entered "E" for it's choice.
//Postcondition: The program has ended.

class Point
{
      public:
             Point();
             //Postcondition: All values have been set to zero.
             Point(double);
             //Postcondition: The x coordinate of the point has been set to some number.
             Point(double, double);
             //Postcondition: The x and y coordinates of the point have been set to some number.
             friend Point reset();
             //Precondition: The user has entered "A" for it's choice.
             //Postcondition: The point has been reset to a new one.
             friend Point enter();
             //Postcondition: The user has entered the coordinates of point a.
             friend void print(Point);
             //Precondition: The user has entered "B" for it's choice.
             //Postcondtion: The point has been dislayed on the screen.
             friend void dist(Point, Point);
             //Precondition: The user has entered "C" for it's choice.
             //Postcondition: The distance as been displayed on the screen.
             friend void slope(Point, Point);
             //Precondition: "The user has entered "D" for it's choice.
             //Postcondition: The slope has been displayed on the screen.
      private:
              double x_coord;
              double y_coord;
};

int main()
{
    Point b(-3, 5), a;
    
    cout << "This program takes in a coordinate point.\n";
    
    char letter;
    a = enter();
    do
    {
        cout << "A)Reset the point.\nB)Print the Point.\nC)Find the distance between the two points.\n"
             << "D)Find the slope between the two points.\nE)Exit.\nWhat do you want to do with the point(the other point is (-3,5)):";
        cin >> letter;
        while((letter != 'A') && (letter != 'B') && (letter != 'C') && (letter != 'D') && (letter != 'E')) //The program will display an error until letter is A,B,C,D, or E.
        {
            cout << "Invalid choice, try again:";
            cin >> letter;
        }
        switch(letter)
        {
            case 'A':
                 a = reset();
                 break;
            case 'B':
                 print(a);
                 break;
            case 'C':
                 dist(a,b);
                 break;
            case 'D':
                 slope(a,b);
                 break;
            case 'E':
                 exit();
                 break;
        }
    }while(letter != 'E'); //The program will repeat until the user decides to exit.
    
    system("pause");
    return 0;
}
    
Point::Point()
{
    x_coord = 0;
    y_coord = 0;
}

Point::Point(double a)
{
    x_coord = a;
    y_coord = 0;
}

Point::Point(double a, double b)
{
    x_coord = a;
    y_coord = b;
}

Point enter()
{
    Point a;
    cout << "What is the x-coordinate?:";
    cin >> a.x_coord;
    cout << "What is the y-coordinate?:";
    cin >> a.y_coord;
    return a;
}

Point reset()
{
    Point a;
    cout << "What is the new x-coordinate?:";
    cin >> a.x_coord;
    cout << "What is the new y-coordinate?:";
    cin >> a.y_coord;
    return a;
}

void print(Point a)
{
    cout << "The point has the coordinates of (" << a.x_coord << "," << a.y_coord << ").\n";
}

void dist(Point a, Point b)
{
    double distance;
    distance = sqrt(pow((b.x_coord - a.x_coord),2) + pow((b.y_coord - a.y_coord),2));    
    cout << "The distance between the two points is " << distance << ".\n";
}

void slope(Point a, Point b)
{    
     double slope;    
     if(b.x_coord == a.x_coord) //If both x-coordinates are the same then the slope is undefined.
     {
         cout << "The slope is undefined.\n";
     }
     else
     {
         slope = (b.y_coord - a.y_coord) / (b.x_coord - a.x_coord); 
         cout << "The slope of the two points is " << slope << ".\n";
     }
}

void exit()
{    
     exit(1);
}



