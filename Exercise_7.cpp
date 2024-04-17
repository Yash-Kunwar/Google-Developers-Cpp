// This is a number analogy to a famous card trick. Ask the user to enter a three-digit number. Think of the number as ABC (where A, B, C are the three digits of the number). Now, find the remainders of the numbers formed by ABC, BCA, and CAB when divided by 11. We will call these remainders X, Y, Z. Add them up as X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 11 (whichever operation results in a positive number less than 20; note if the sum is 9, just report this and stop the process). Finally, divide each of the sums in half. The resulting digits are A, B, C. Write a program that implements this algorithm.

#include <iostream>
using namespace std;

int main()
{
    int num, a, b, c, x, y, z;
    cout << "enter a 3 digit number : ";
    cin >> num;

    // extract each digit
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;

    // rearrange and divide
    x = ((100 * a) + (10 * b) + c) % 11; // abc
    y = ((100 * b) + (10 * c) + a) % 11; // bca
    z = ((100 * c) + (10 * a) + b) % 11; // cab

    // add the new numbers
    int sum1 = x + y;
    int sum2 = y + z;
    int sum3 = z + x;

    // adjust the sums
    if (sum1 % 2 != 0)
    {
        sum1 += (sum1 < 9) ? 11 : -11;
    }
    if (sum2 % 2 != 0)
    {
        sum2 += (sum2 < 9) ? 11 : -11;
    }
    if (sum3 % 2 != 0)
    {
        sum3 += (sum3 < 9) ? 11 : -11;
    }
    // divide sum
    a = sum1 / 2;
    b = sum2 / 2;
    c = sum3 / 2;

    cout << "the derived number is : " << a << b << c;

    return 0;
}