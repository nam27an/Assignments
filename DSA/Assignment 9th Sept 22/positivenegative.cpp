#include<iostream>
using namespace std;

int main()
{
    int array[50],i,n,pos=0,neg=0,j,zero=0;
    int poscount=0,negcount=0;

    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;

    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"The max and min values in the array are "<<endl;
    for(i=0;i<n;i++)
    {
        if(array[i]<neg)
        {
            negcount++;
        }
        else if(array[i]>pos)
        {
            poscount++; 
        }
        else 
        zero++;
    }
    cout<<"The positive values are "<<poscount<<endl;
    cout<<"The negative values are "<<negcount<<endl;
    cout<<"The zero values are "<<zero<<endl;
    return 0;
}