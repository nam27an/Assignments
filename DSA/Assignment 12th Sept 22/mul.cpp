#include<iostream>
using namespace std;

int main()
{
    int r, c, k; 
    int a[10][10],b[10][10],i,j, mul[10][10];

    cout<<"Enter rows "<<endl;
    cin>>r;
    cout<<"Enter columns "<<endl;
    cin>>c;

    cout<<"Enter elements in the 1st Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>a[i][j];
    }

    cout<<"Enter elements in the 2nd Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>b[i][j];
    }

    cout<<"Multiplication of the matrixes "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+= a[i][k]*b[k][j];
            }
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    return 0;
}