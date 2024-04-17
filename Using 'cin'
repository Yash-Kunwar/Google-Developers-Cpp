//basic cin command

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int input_var = 0;

    do
    {
        cout << "Enter a number (-1 = quit): ";

        if (!(cin >> input_var))
        {
            cout << "Enter a numeric value" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (input_var != -1)
        {
            cout << "You entered " << input_var << endl;
        }

    } while (input_var != -1);
    cout << "All done." << endl;
    return 0;
}
