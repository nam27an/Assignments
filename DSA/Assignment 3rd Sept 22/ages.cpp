#include <iostream>
using namespace std;

int main()
{
    int Ram_age, Shyam_age, Ajay_age;

    cout << "Enter the Age of Ram" << endl;
    cin >> Ram_age;
    cout << "Enter the Age of Shyam" << endl;
    cin >> Shyam_age;
    cout << "Enter the Age of Ajay" << endl;
    cin >> Ajay_age;

    if (Ram_age < Shyam_age && Ram_age < Ajay_age)
        cout << "Ram is the youngest";
    else if (Shyam_age < Ram_age && Shyam_age < Ajay_age)
        cout << "Shyam is the youngest";
    else
        cout << "Ajay is the youngest";
    return 0;
}