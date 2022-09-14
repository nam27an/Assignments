#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,i,sum=0;

    cout<<"Enter the number uptil where you want the sum "<<endl;
    cin>>num;

    for(i=1;i<=num;i++)
    {
        cout<<pow(i,2)<<endl;
        sum=sum+ pow(i,2);
    }

    cout<<"The sum of the sqaure of the numbers is "<<sum<<endl;
    return 0;
}