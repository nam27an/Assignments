#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<" Enter a year "<<endl;
    cin>>year;

    if(year%4==0)
        cout<<"The year is a leap year"<<endl;
    else
        cout<<"The year is not a leap year"<<endl;           
    return 0;
}