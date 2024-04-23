#include <iostream>
#include <ctime> // for date and time operators

using namespace std;

int main()
{
    time_t t = time(NULL);
    tm *tPtr = localtime(&t);

    cout << "ZA WARUDO!!!" << endl;
    cout << " " << endl;

    cout << "seconds " << (tPtr->tm_sec) << endl;
    cout << "minutes " << (tPtr->tm_min) << endl;
    cout << "hour " << (tPtr->tm_hour) << endl;
    cout << "date " << (tPtr->tm_mday) << endl;
    cout << "month " << (tPtr->tm_mon) + 1 << endl;
    cout << "year " << (tPtr->tm_year) + 1900 << endl;
    cout << "day " << (tPtr->tm_wday) << endl;
    cout << "day of year " << (tPtr->tm_yday) << endl;
    cout << "daaylight savings " << (tPtr->tm_isdst) << endl;

    return 0;
}
