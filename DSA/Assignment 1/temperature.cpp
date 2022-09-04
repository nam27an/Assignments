#include <iostream>
using namespace std;

int main()
{
    float cel, faren;
    cout << "Enter the temperature in Fahrenheit" << endl;
    cin >> faren;

    cel = ((faren - 32) * 5 / 9);
    cout << "The temperature in celsius is " << cel << endl;
    return 0;
}