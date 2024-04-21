// 1.Write a C++ program to add up all the digits between two given integers and show the digits bw them.
#include <iostream>
using namespace std;

int test(int x, int y)
{
    int digit_sum = 0;
    for (int i = x; i <= y; ++i)
    {
        int p = i;
        while (p > 0)
        {
            digit_sum += p % 10;
            p /= 10;
        }
    }
    return digit_sum;
}

int main()
{
    int n1, n2;
    cout << "Enter 1st no. " << endl;
    cin >> n1;
    cout << "Enter 2nd no. " << endl;
    cin >> n2;

    cout<<"Numbers b/w "<<n1<<"and "<<n2<<"are :-"<<endl;
    for (int i = n1 + 1; i < n2; i++)
    {
        cout << i << " ";
    }

    cout << "\nSum of digits b/w " << n1 << " and " << n2 << " = ";
    cout << test(n1, n2) << endl;
    return 0;
}
