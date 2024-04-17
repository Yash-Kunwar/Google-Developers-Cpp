// Here is a "magic number" problem: Ask a user to enter a three-digit number whose first digit is greater than its last. Your program will reverse the number, and subtract the reversal from the original number. Finally, reverse the resulting number, and add it to its unreversed form. Output the final result. The original number that the user enters must be of integer type (not three chars). Think about how to write a function that takes an integer as input and returns the reverse of that number.
#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return reversed;
}

int main()
{
    int originalNum;
    cout << "Input Number: ";
    cin >> originalNum;

    if (originalNum < 100 || originalNum > 999)
    {
        cout << "Invalid input. Please enter a three-digit number." << endl;
        return 1;
    }

    int reversedNum = reverseNumber(originalNum);
    cout << "Reversed Number: " << reversedNum << endl;
    int difference = originalNum - reversedNum;
    cout << "Subtract Number: " << difference << endl;
    int new_reversedNumber = reverseNumber(difference);

    int finalResult = difference + reverseNumber(difference);
    cout << "Reversed Number: " << new_reversedNumber << endl;

    cout << "Final Number: " << finalResult << endl;

    return 0;
}