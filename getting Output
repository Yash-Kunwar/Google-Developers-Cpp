// this program gives a table of tables from 1-9. The "\t" represents the tab escape sequence.  When you include \t in a string literal or character constant, it inserts a tab character into the output.
// Further a loop is created where initial value of c is 1 and range is from 1 to 9(inc.), incrimented linearly.  Another loop is created inside the first loop where the initialisation is same. 
// / But this time i is used instead of c. Inside this second loop, the product of i and c is calcultated seperated by tab space.

#include <iostream>
using namespace std;

int main()
{
    cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl
         << "" << endl;
    for (int c = 1; c < 10; c++)
    {
        cout << c << "| ";
        for (int i = 1; i < 10; i++)
        {
            cout << i * c << '\t';
        }
        cout << endl;
    }
    return 0;
}

