//Student: Ian Nielsen
//File Name: Midyear.CPP
//Last Updated: January 25th 2011
//I, Ian Nielsen did not get any help while working on this program.

#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

void open(ifstream&, ofstream&);
//Precondition: The program has been opened correctly.
//Postcondition: The streams have been given values.
double read(ifstream&, double, double, double);
//Precondition: The files have been opened and connected to a stream.
//Postcondition: a b and c have been given values.
double area_calc(double, double, double);
//Precondition: a b and c have been given values.
//Postcondition: Area will have been given a value.
void output(ofstream&, double, double, double, double);
//Precondition: All variables havr been given values.
//Postcondition: The values will be shown in a file and on a screen.

int main()
  {
  double a(0), b(0), c(0), area(0);
  ifstream in;
  ofstream out;
  open(in, out);
  while (!in.eof()) //The loop will continue until it gets to the end of the file.
    {
    read(in, a, b, c);
    area = area_calc(a, b, c);
    output(out, a, b, c, area);
    }
  in.close();
  out.close();  
  system("pause");
  return 0;
  }

void open(ifstream& in, ofstream& out)
{
    char file_1[10], file_2[10];
    cout << "This program will take 3 side lengths of a triangle from a file,"
         << " calculate the \narea of the triangle, and output the area to a file and the screen.\n";
    cout << "Enter the name of your input file:";
    cin >> file_1;
    cout << "Enter the name of your output file:";
    cin >> file_2;
    in.open("file_1");
    out.open("file_2");
}

double read(ifstream& in, double a, double b, double c)
{
    in >> a >> b >> c;
    return a, b, c;
}

double area_calc(double a, double b, double c)
{
    double s, area;
    s = ((a + b + c) / 2);
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

void output(ofstream& out, double a, double b, double c, double area)
{
    cout << "The side lengths of the triangle are " << a << ", " << b << ", and " << c << endl;
    cout << "The area of the triangle is " << area << " units squared.\n";
    out << area;
}
