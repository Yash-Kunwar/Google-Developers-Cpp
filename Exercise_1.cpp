// The common field cricket chirps in direct proportion to the current temperature. Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature. Write a program that takes as input the number of chirps in a minute and prints the current temperature.

#include <iostream>
using namespace std;

int cricket(int x)
{
    int c = (x + 40) / 4;
    return c;
}

int main()
{
    int chirp;
    cout << "Enter the number of times the cricket chirped in a minute : ";
    cin >> chirp;
    cout << endl
         << "The temperature is " << cricket(chirp);
    return 0;
}