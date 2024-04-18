// This program is an example of passing value by reference
#include <iostream>
using namespace std;

void accelerate(int &speed, int amount)
{
    speed += amount;
}

int main(void)
{
    int a, b;

    cout << "Enter speed" << endl;
    cin >> a;
    cout << "Enter amount" << endl;
    cin >> b;

    accelerate(a, b);

    cout << "accelerated speed = " << a;

    return 0;
}
