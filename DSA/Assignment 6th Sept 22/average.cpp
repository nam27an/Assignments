#include<iostream>
using namespace std;

int main()
{
    int i,avg,count=0,sum=0;
    cout<<"Numbers between 15-25 are "<<endl;
    
    for(i=15;i<=25;i++)
    {   cout<<i<<endl;
        sum= sum+i;  
        count++;
    }
    cout<<"The sum of the numbers is "<<sum<<endl;
    cout<<"Average of the numbers is "<<sum/count<<endl;
    return 0;
}