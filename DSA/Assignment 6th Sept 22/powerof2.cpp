#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long power,i;

    cout<<" Power of 2 above 1000 is"<<endl;
    for(i=1;i<=15;i++)
    {
        if(pow(2,i)>1000)
        break;
    }


        cout<<pow(2,i)<<endl;
    return 0;
}