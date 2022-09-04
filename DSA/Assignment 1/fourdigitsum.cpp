#include<iostream>
using namespace std;

int main()
{
    int last, first, number;

    cout<<"Enter the 4 digit number"<<endl;
    cin>>number;

    first= number/1000;
    last= number%10;

    cout<<"The sum of the digits of the number is "<<first+last<<endl;
    return 0;
}