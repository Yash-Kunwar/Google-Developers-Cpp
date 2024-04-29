#include <iostream>
using namespace std;

int main()
{
    int a, i = 0;

    cout << "enter a number : ";
    cin >> a;

    for (i = 1; i <= 10; i++)
    {
        cout << a << " x " << i << " = " << a * i << endl;
    }
    return 0;
}
