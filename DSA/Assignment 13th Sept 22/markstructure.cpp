#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int marks;
} s[15];

int main()
{   int i;
    cout << "Enter information of students: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    
    
     if (s[i].marks>=70)
        cout<<"Distinction"<<endl;
    else if(s[i].marks<70 && s[i].marks>=60)
        cout<<"First Division"<<endl;
    else if(s[i].marks<60 && s[i].marks>=50)
        cout<<"Second Division"<<endl;
    else if(s[i].marks<50 && s[i].marks>=40)
        cout<<"Third Division"<<endl;
    }
    
   
    return 0;
}