#include <iostream>
using namespace std;

int main()
{

    double distance;

    cout << "Enter the distance between the cities in Kms" << endl;
    cin >> distance;

    cout << "The distance in metres is " << distance * 1000 << endl;

    cout << "The distance in centimetres is " << distance * 1000 * 100 << endl;

    cout << "The distance in feet is " << distance * 1000 * 3.28084 << endl;

    cout << "The distance in inches is " << distance * 1000 * 39.3 << endl;
    return 0;
}