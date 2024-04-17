// Suppose we wanted to print a banner for the following: "FREEZY BREEZE MAKES THREE TREES FREEZE". We want the letters to be pretty big since this is a banner.Being a good problem decomposer, you probably noticed that rather than put all the cout's in the main function, it would be far more efficient to put them in functions. So we could have a "printE" function and a "printZ" function and so on.
#include <iostream>
using namespace std;

void printF()
{
    cout << "FFFFF" << endl;
    cout << "F" << endl;
    cout << "FFF" << endl;
    cout << "F" << endl;
    cout << "F" << endl;
}

void printR()
{
    cout << "RRRRR" << endl;
    cout << "R    R" << endl;
    cout << "RRRRR" << endl;
    cout << "R R" << endl;
    cout << "R   R" << endl;
}

void printE()
{
    cout << "EEEEE" << endl;
    cout << "E" << endl;
    cout << "EEE" << endl;
    cout << "E" << endl;
    cout << "EEEEE" << endl;
}

void printZ()
{
    cout << "ZZZZZ" << endl;
    cout << "   Z" << endl;
    cout << "  Z" << endl;
    cout << " Z" << endl;
    cout << "ZZZZZ" << endl;
}

int main()
{
    printF();
    cout << endl;
    printR();
    cout << endl;
    printE();
    cout << endl;
    printE();
    cout << endl;
    printZ();
    cout << endl;
    printE();
    cout << endl;
    return 0;
}