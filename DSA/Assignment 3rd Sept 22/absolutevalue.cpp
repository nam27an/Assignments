#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the number ";
    cin>>number;

    if(number<0)
        cout<<"The absolute value of the number is "<<(-1*number)<<endl;
    else
    cout<<"The absolute value of the number is "<<number<<endl;
    return 0;
}