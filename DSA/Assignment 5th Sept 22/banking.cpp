#include <iostream>
using namespace std;

int main()
{
    int bank, balance = 10000, deposit, withdraw;
    cout << "Please Follow the Menu " << endl;
    cout << "0 - Quit" << endl;
    cout << "1 - Deposit Money" << endl;
    cout << "2 - Withdraw Money" << endl;
    cout << "3 - Check Balance" << endl;
    cout << "4 - Other Operations" << endl;
    cin>>bank;

    switch (bank)
    {
    case 0:
        cout << "Thank you for accessing the ATM, Do Visit again " << endl;
        break;

    case 1:
        cout << "Enter the amount you want to deposit" << endl;
        cin >> deposit;
        cout << "Total balance is now " << deposit + balance << endl;
        break;

    case 2:
        cout << "Enter amount you want to withdraw " << endl;
        cin >> withdraw;
        cout << "Withdraw processing, The balance amount is " << balance - withdraw << endl;
        break;

    case 3:
        cout << "The current balance in your account is " << balance << endl;
        break;

    case 4:
        cout << "We are Sorry, the other services are not available right now. Please try again later" << endl;
        break;

    default:
        cout << "Please enter a relevant input " << endl;
    }
    return 0;
}