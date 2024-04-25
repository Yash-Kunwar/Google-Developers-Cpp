// a C++ program to find the area of any triangle using Heron's formula.

#include <iostream>
#include <math.h> // FOR MATHEMATICAL OPERATIONS

using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter sides of the triangle : " << endl;
    cin >> a >> b >> c;

    float s = (a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Using herons formula :- " << endl;
    cout << "Area of triangle = " << area;
    return 0;
}
