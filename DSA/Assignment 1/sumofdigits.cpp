#include<iostream>
using namespace std;

int main()
{
    int input, sum, last,next;

    cout<<"Enter a 5 digit number"<<endl;
    cin>>input;

    last=input%10;
    sum=last;
    next=(input/10)%10;
    sum=sum+next;
    next=(input/100)%10;
    sum=sum+next;
    next=(input/1000)%10;
    sum=sum+next;
    next=(input/10000)%10;
    sum=sum+next;
    cout<<"The sum is "<<sum<<endl;

    return 0;
}