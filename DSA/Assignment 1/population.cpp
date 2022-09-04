#include<iostream>
using namespace std;

int main()
{
    double men, wmen, litm, litwo, illit, lit, illitwmen;
    int tot=80000;
    men = (52/100) * 80000;
    wmen = tot-men;
    lit = (48/100) * 80000;
    litm = (35/100) * 80000;
    litwo = lit-litm;
    illitwmen = wmen-litwo;
    cout<<"Hence the total illiterate men of the town is "<<men-litm<<endl;
    cout<<"Hence the total illiterate women is "<<illitwmen<<endl;
    return 0;
}