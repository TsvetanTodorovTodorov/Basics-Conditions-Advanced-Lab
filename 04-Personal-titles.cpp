#include <iostream>
using namespace std;

int main()
{
    double age;
    cin >> age;
    string sex;
    cin >> sex;

    if (sex == "m")
    {
        if (age < 16)
        {
            cout << "Master" << endl;
        } else if (age >= 16)
        {
            cout << "Mr." << endl;
        }
    } else if (sex == "f")
    {
        if (age < 16)
        {
            cout << "Miss" << endl;
        } else if (age >= 16)
        {
            cout << "Ms." << endl;
        }
    }
    return 0;
}