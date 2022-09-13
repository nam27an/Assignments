#include<iostream>
using namespace std;

int main()
{
    int array[50],i,n,min,max,j;

    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;

    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    min=array[0];
    max=array[0];

    cout<<"The max and min values in the array are "<<endl;
    for(i=0;i<n;i++)
    {
        if(array[i]<min)
        min=array[i];
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>max)
        max=array[i];
    }
    cout<<"The minimum value is "<<min<<endl;
    cout<<"The maximum value is "<<max<<endl;
    return 0;
}