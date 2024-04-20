// The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49.
// Find the next number that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767. You may use library functions that you know of, (or mathematical formulas) to make your program run faster.
// It is also possible to write this program using for-loops to determine if a number is a perfect square or a sum of a series. (Note: depending on your machine and your program, it can take quite a while to find this number.)

#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long x) // Function to check if a number is a perfect square
{
    long long sqrt_x = static_cast<long long>(sqrt(x));
    return (sqrt_x * sqrt_x == x);
}

void findNextPerfectSquareSum() // Function to find the next perfect square that is also the sum of integers from 1 to n
{
    long long n = 50; // Starting point (you may adjust this value for optimization)

    while (true) // Iterate through increasing values of n
    {

        long long sum = (n * (n + 1)) / 2; // Calculate the sum of integers from 1 to n

        if (isPerfectSquare(sum)) // Check if the sum is a perfect square
        {

            long long sqrt_sum = static_cast<long long>(sqrt(sum)); // Calculate the square root of the sum

            cout << "The next special perfect square is: " << sum << endl;
            cout << "It is the perfect square of " << sqrt_sum << endl;
            cout << "It is the sum of the integers from 1 to " << n << endl;

            return;
        }

        n++; // Increment n to check the next sum
    }
}

int main()
{
    findNextPerfectSquareSum();

    return 0;
}
