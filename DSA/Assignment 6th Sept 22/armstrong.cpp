#include<iostream>
using namespace std;

int main()
{
    int num, count=0;

    cout<<"Enter the number"<<endl;
    cin>>num;

    while(num!=0)
    {
        num=num/10;
        count++;
    }
    cout<<"Total number of digits in the number are"<<count<<endl;
    return 0;
}