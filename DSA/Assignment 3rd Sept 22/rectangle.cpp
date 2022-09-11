#include <iostream>
using namespace std;

int main()
{
    int a, b, area, perimeter;

    cout << "Enter the length of the rectangle" << endl;
    cin >> a;
    cout << "Enter the breadth of the rectangle" << endl;
    cin >> b;

    area = a * b;
    perimeter = 2 * (a + b);
    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;

    if (area > perimeter)
        cout << "Area of the rectangle is larger" << endl;

    else
        cout << "Perimeter is larger " << endl;

    return 0;
}