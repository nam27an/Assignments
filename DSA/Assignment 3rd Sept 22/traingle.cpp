#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter angle 1"<<endl;
    cin>>a;

    cout<<"Enter angle 2"<<endl;
    cin>>b;

    cout<<"Enter angle 3"<<endl;
    cin>>c;

    if(a+b+c==180)
    cout<<"Yes the Triangle is valid";
    else
    cout<<"Not valid";
    return 0;
}