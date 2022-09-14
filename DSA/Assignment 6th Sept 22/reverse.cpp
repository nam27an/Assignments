#include<iostream>
using namespace std;

int main()
{
    int num;
    int reverse, lastdigit;

    cout<<"Enter the number "<<endl;
    cin>>num;

    while(num!=0)
    {
        lastdigit= num%10;
        reverse= reverse*10+ lastdigit;
        num=num/10;
    }
    
    cout<<"The reversed number is "<<reverse<<endl;

    return 0;
}