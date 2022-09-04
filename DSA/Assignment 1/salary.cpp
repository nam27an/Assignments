#include <iostream>

using namespace std;

int main()
{
    int salary, allow1, allow2, netsalary;
    cout << "Enter the salary" << endl;
    cin >> salary;

    allow1 = (40 * salary) / 100;
    cout << "40 Percent dearence allowance = " << allow1 << endl;

    allow2 = (20 * salary) / 100;
    cout << "20 Percent rent allowance = " << allow2 << endl;

    netsalary = salary + allow1 + allow2;
    cout << "The Total Salary of Ramesh is = " << netsalary << endl;

    return 0;
}