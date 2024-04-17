// As electronic stopwatches become cheaper and more accurate, we will no doubt be deluged with impossibly accurate measurements of time. Write a program that takes as input a time period given in seconds, and outputs the number of hours, minutes and seconds it represents.
#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int, int> convert(int total)
{
    int hour, min, sec;
    cout << "Enter total number of seconds: ";
    cin >> total;
    hour = total / 3600;
    min = (total % 3600) / 60;
    sec = (total % 3600) % 60;
    return make_tuple(hour, min, sec);
}

int main()
{
    int hours, minutes, seconds;
    tie(hours, minutes, seconds) = convert(0);
    // Unpack all values
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}