//Student: Ian Nielsen
//File Name: Quadrant.CPP
//Last Updated: February 17th 2011
//I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>
using namespace std;

class Quadrant
{
       public:
              Quadrant();
              //Postcondition: All variables have been set to zero.
              Quadrant(double);
              //Postconditon: x_coord have been given a value.
              Quadrant(double, double);
              //Postcondition: x_coord and y_coord have been given values.
              void instructions();
              //Precondition: All variables have been set to zero.
              //Postcondition: The instructions have been displayed on the screen.
              double input();
              //Precondition: All the variables have been set to zero.
              //Postcondition: x_coord and y_coord have been given values.
              int quadrant_calc();
              //Precondition: x_coord and y_coord have been given values.
              //Postcondition: quad has been given a value.
              void print();
              //Precondition: quad has been given a value.
              //Postcondition: quad has been displayed to the screen.
       private:
               double x_coord;
               double y_coord;
               int quad;
};

int main()
{
    Quadrant point(0.0, 0.0);
    char choice;
    point.instructions();
    do
    {
        point.input();
        point.quadrant_calc();
        point.print();
        cout << "Do you want to do this again?(y or n):";
        cin >> choice;
    }while((choice == 'y') || (choice == 'Y')); //As long as the user wants to continue, the program will repeat.
    
    system("pause");
    return 0;
}

Quadrant::Quadrant()
{
     x_coord = 0;
     y_coord = 0;
}

Quadrant::Quadrant(double a)
{
     x_coord = a;
     y_coord = 0;
}

Quadrant::Quadrant(double a, double b)
{
     x_coord = a;
     y_coord = b;
}

void Quadrant::instructions()
{
     cout << "This program will ask you for the x and y coordinates of a point "
          << "in the\nrectangular coordinate plane, and tell the quadrant it is in.\n";
}

double Quadrant::input()
{
     cout << "What is the x-coordinate of your point?:";
     cin >> x_coord;
     cout << "What is the y-coordinate of your point?:";
     cin >> y_coord;
     return x_coord, y_coord;
}

int Quadrant::quadrant_calc()
{
     if((x_coord > 0) && (y_coord > 0)) //If both coordinates are less than zero, quad equals 1.
     {
          quad = 1;
     }
     
     if((x_coord < 0) && (y_coord > 0)) //If the x-coord is less than zero, and the y-coord is more than zero, quad equals 2.
     {
          quad = 2;
     }
     
     if((x_coord < 0) && (y_coord < 0)) //If both coordinates are less than zero, quad equals 3.
     {
          quad = 3;
     }
     
     if((x_coord > 0) && (y_coord < 0)) //If the x-coord is more than zero, and the y-coord is less than zero, quad equals 4.
     {
          quad = 4;
     }
     
     if((x_coord == 0) && (y_coord != 0)) //If the x-coord equals zero, and the y-coord doesn't, the point is on the y-axis.
     {
          cout << "The point (" << x_coord << "," << y_coord << ") is on the y-axis.\n";
            quad = 0;
     }
     
     if((y_coord == 0) && (x_coord != 0)) //If the y-coord equals zero, and the x-coord doesn't, the point is on the x-axis.
     {
          cout << "The point (" << x_coord << "," << y_coord << ") is on the x-axis.\n";
            quad = 0;
     }
     
     if((x_coord == 0) && (y_coord == 0)) //If bothe coordiantes equal zero, the point is at the origin.
     {
          cout << "The point (" << x_coord << "," << y_coord << ") is at the origin.\n";
            quad = 0;
     }
     
     return quad;
}

void Quadrant::print()
{
     if (quad != 0) //If the quadrant is not zero, the following will print.
     {
         cout << "The point (" << x_coord << "," << y_coord << ") is in quadrant " << quad << endl;
     }
}
