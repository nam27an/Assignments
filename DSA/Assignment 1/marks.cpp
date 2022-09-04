#include <iostream>
using namespace std;

int main()
{
    int marks1, marks2, marks3, marks4, marks5, total;
    float per;
    cout << "Enter the marks obtained in Subject 1" << endl;
    cin >> marks1;

    cout << "Enter the marks obtained in Subject 2" << endl;
    cin >> marks2;

    cout << "Enter the marks obtained in Subject 3" << endl;
    cin >> marks3;

    cout << "Enter the marks obtained in Subject 4" << endl;
    cin >> marks4;

    cout << "Enter the marks obtained in Subject 5" << endl;
    cin >> marks5;

    cout << "Total marks obtained by the student are" << marks1 + marks2 + marks3 + marks4 + marks5 << endl;

    per = ((marks1 + marks2 + marks3 + marks4 + marks5) * 100) / 500;
    cout << "Percentage of marks" << per << endl;
    return 0;
}