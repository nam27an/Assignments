#include <iostream>
using namespace std;

int main()
{
    int cost, sell;

    cout << "Enter the cost price of the item" << endl;
    cin >> cost;

    cout << "Enter the selling price of the item" << endl;
    cin >> sell;

    if (cost > sell)
    {
        cout << "There is a loss of " << cost - sell << endl;
    }
    else if (sell > cost)
    {
        cout << "There is a profit of " << sell - cost << endl;
    }
    else
        {
            cout << "No profit no loss" << endl;
        }
    return 0;
}