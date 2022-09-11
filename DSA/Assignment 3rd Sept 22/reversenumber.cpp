#include<iostream>
using namespace std;

int main()
{
    int number,a,b,c,d,e;

    cout<<"Enter a 5 digits number"<<endl;
    cin>>number;

    a=number%10;
    b=(number/10)%10;
    c=(number/100)%10;
    d=(number/1000)%10;
    e=(number/10000);

    cout<<"The reversed number is "<<a<<b<<c<<d<<e<<endl;

    if(number==(a*10000+b*1000+c*100+d*10+e))
        cout<<"The original number and the reversed number is same";
    else
        cout<<"No not equal";    
    return 0;
}