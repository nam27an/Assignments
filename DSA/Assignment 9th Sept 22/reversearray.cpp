#include<iostream>
using namespace std;

int main()
{
    int array[50],i,j,n,array2[50];
    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"The elements of the array in reverse order are"<<endl;
    
    for(i=n-1,j=0;i>=0;i--,j++)  
    {   array2[j]=array[i];
        cout<<array2[j]<<endl;
    }

    return 0;
}