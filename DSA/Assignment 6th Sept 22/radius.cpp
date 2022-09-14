#include<iostream>
using namespace std;

int main()
{
    double radius;

    cout<<"Enter the radius of the circle"<<endl;
    cin>>radius;

    if(radius==0)
    {
        if(radius==0)
        {
            cout<<"Enter the radius of the circle"<<endl;
            cin>>radius;
            cout<<"The area of the circle is "<<3.14*radius*radius;
        }
    }
    else
    {
        cout<<"The area of the circle is "<<3.14*radius*radius;
    }

    return 0;
}