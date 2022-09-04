#include<iostream>
using namespace std;

int main()
{
    int c,d,b;

    cout<<"Enter a number in location C";
    cin>>c;

    cout<<"Enter a number in location D";
    cin>>d;

    b=c;
    c=d;
    d=b;

    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}