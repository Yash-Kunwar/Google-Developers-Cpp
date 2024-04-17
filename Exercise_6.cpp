// The law requires that food product manufacturers place expiration dates on their products, but there is a loophole in the law: it does not require the expiration date to be in any particular form. So, it can be written in Swahili and still be legal. Ralph Nader's third cousin, Nadine is a self-appointed Food Quality Spy. She has learned that many food product manufacturers have started encoding the product expiration dates to keep customers from knowing how old the stuff is. But the encoding does allow grocers to figure out the expiration dates if for some reason, they want to. One popular encoding method :-
// 1. encode the months from Jan to Dec as 'A' through 'L'
// 2. encode each digit of the date as 'Q' through 'Z'
// 3. encode the year as 'A' through 'Z' meaning 1 through 26 which is then added to 1995.
// Nadine found a particularly questionable loaf of bread with this date: ARZM. Write a program to determine the date.

#include <iostream>
#include <string>
#include <cctype> // Include the <cctype> header for toupper function
using namespace std;

int decodeMonth(char encodedMonth)
{
    return encodedMonth - 'A' + 1; // Convert encoded month character to month number
}

int decodeYear(char encodedYear)
{
    return encodedYear - 'A' + 1995; // Convert encoded year character to year
}

int decodeDateDigit(char encodedDigit)
{
    return encodedDigit - 'Q'; // Convert encoded date digit character to digit value
}

int main()
{
    string encodedDate;
    cout << "Enter the encoded date: ";
    cin >> encodedDate;

    // Convert input to uppercase
    for (char &c : encodedDate)
    {
        c = toupper(c); // Convert each character to uppercase
    }

    if (encodedDate.length() != 4)
    { // Check if the input length is not 4
        cout << "Invalid encoded date format. It should be 4 characters long." << endl;
        return 1; // Return 1 indicating an error
    }

    int month = decodeMonth(encodedDate[0]);                                           // Decode the month
    int date = decodeDateDigit(encodedDate[1]) * 10 + decodeDateDigit(encodedDate[2]); // Decode the date
    int year = decodeYear(encodedDate[3]);                                             // Decode the year

    // Output the decoded date
    cout << "Decoded date: " << date << "/" << month << "/" << year << endl;

    return 0;
}
