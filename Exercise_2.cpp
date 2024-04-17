// Write a program that will compute your final grade for a programming course you are taking. Here is the grading scheme: Final grades will be based on the following:40% Assignments, 15% Midterm Examination, 35% Final Examination,10% Class Participation Grade.Your program should ask the user for the four assignment scores, the midterm, final and section grades. Then, the final score is calculated and printed. To do the calculations, you average the four assignment scores together and then multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. Then you add all the results of these multiplications together.

#include <iostream>
using namespace std;

int average_assignment(int a, int b, int c, int d)
{
    float avg = ((a + b + c + d) / 4) * 0.4;
    return avg;
}

int main()
{
    int ass1, ass2, ass3, ass4, f_exams, m_exams, partic;
    float score_ass, score_f_exams, score_m_exams, score_partic, grand_finle;

    cout << "Enter the score of the 4 assignments : ";
    cin >> ass1 >> ass2 >> ass3 >> ass4;
    score_ass = average_assignment(ass1, ass2, ass3, ass4);

    cout << "Enter the score of your final examinations : ";
    cin >> f_exams;
    score_f_exams = f_exams * 0.35;

    cout << "Enter the score of your mid-term examination : ";
    cin >> m_exams;
    score_m_exams = m_exams * 0.15;

    cout << "Enter the score of your class participation : ";
    cin >> partic;
    score_partic = partic * 0.1;

    grand_finle = score_ass + score_f_exams + score_m_exams + score_partic;
    cout << "The final grade is " << grand_finle;

    return 0;
}