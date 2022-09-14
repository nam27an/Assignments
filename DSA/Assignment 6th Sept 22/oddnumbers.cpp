#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;
    cout<<"Odd numbers between 1 to 101 are "<<endl;
    
    for(i=1;i<=101;i++)
    {  
        if(i%2==1)
        { 
            cout<<i<<endl;
            sum=sum+i;
        }
    }

    cout<<"The sum of the numbers is"<<sum<<endl;
    return 0;
}