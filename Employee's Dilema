// You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair. Your boss has given you three options for compensation, which you must choose before you begin your first day:
// 1. Straight salary of $600 per week;
// 2. A salary of $7.00 per hour plus a 10% commission on sales;
// 3. No salary, but 20% commissions and $20 for each pair of shoes sold
// You, being an expert C++ programmer, figure you can write a program to help decide the best choice of compensation. A common approach in doing decomposition for a larger program is to create a main function that reads like an outline to solving the problem. Then, we write the functions to do each task.
// 2 solutions are possibe for the problem.

#include <iostream>
using namespace std;

#define price_per_unit 225
#define fixed_salary 600
#define salary_p_hour 7.0
#define commission1 0.10
#define commission2 0.20
#define working_hours 40
#define bonus_p_unit 20

int get_input()
{
    int units;
    cout << "Enter number of units sold sold per week : ";
    if (!(cin >> units))
    {
        cout << "--Numbers Only--" << endl;
        return 0;
    }
    else
    {
        return units;
    }
}

void Method1()
{
    cout << "Method 1 : " << fixed_salary << endl;
}

void Method2(int sales)
{
    double perHour, totalPay, commission;
    perHour = salary_p_hour * working_hours;
    commission = (sales * price_per_unit) * commission1;
    totalPay = perHour + commission;
    cout << "Method 2 : " << totalPay << endl;
}

void Method3(int sales)
{
    int extra;
    double totalPay, commission;
    extra = bonus_p_unit * sales;
    commission = (price_per_unit * sales) * commission2;
    totalPay = extra + commission;
    cout << "Method 3 : " << totalPay << endl;
}
int main()
{
    int weekly_sales = get_input();
    if (weekly_sales == 0)
        return 0;
    Method1();
    Method2(weekly_sales);
    Method3(weekly_sales);
}

// -----------------------------------------------------------------------------------------------------------------------------

//A much shorter and easier approach to this question is also provided. This is my solution to the question. 

// #include <iostream>
// using namespace std;

// int get_input()
// {
//     int units;
//     cout << "Enter number of units sold sold in a week : ";
//     if (!(cin >> units))
//     {
//         cout << "--Numbers Only--" << endl;
//         return 0;
//     }
//     else
//     {
//         return units;
//     }
// }

// int main()
// {
//     int Method1, Method2, Method3;
//     int s = get_input();
//     cout << "Salaries are : " << endl;
//     Method1 = 600;
//     Method2 = (7 * 40) + (0.10 * 225 * s);
//     Method3 = (0.20 * 225 * s) + (20 * s);
//     cout << "Method 1 : " << Method1 << endl;
//     cout << "Method 2 : " << Method2 << endl;
//     cout << "Method 3 : " << Method3 << endl;

//     return 0;
// }
