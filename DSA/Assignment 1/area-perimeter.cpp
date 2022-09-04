#include<iostream>
using namespace std;

int main()
{
    int length, breadth, radius;

    cout<<"Enter the length and breadth of the rectangle "<<endl;
    cin>>length>>breadth;

    cout<<"The area of the rectangle is "<<length*breadth<<endl;
    cout<<"The perimeter of the rectangle is "<<2*(length+breadth)<<endl;

    cout<<"Enter the radius of the circle "<<endl;
    cin>>radius;

    cout<<"The area of the circle is "<<3.14*radius*radius<<endl;
    cout<<"The circumference of the circle is "<<2*3.14*radius<<endl;


    return 0;
}