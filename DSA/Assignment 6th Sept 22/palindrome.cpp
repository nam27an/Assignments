#include<iostream>
using namespace std;

int main()
{
    int num, original, reverse, lastdigit;

    cout<<"Enter the number "<<endl;
    cin>>num;

    original=num;

    while(num!=0)
    {
        lastdigit= num%10;
        reverse= reverse*10+ lastdigit;
        num=num/10;
    }
 
    if(reverse==original)
        cout<<"Yes the number is Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}