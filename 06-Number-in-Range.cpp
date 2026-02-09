#include <iostream>
using namespace std;

int main()
{
    // to chech if a certain number is in range of -100 and 100 and is different from 0;

    int number;
    cin >> number;

    if (number >= -100 && number <= 100 && number != 0)
    {
        cout << "Yes" << endl;
    } else
    {
        cout << "No" << endl;
    }
    

    return 0;
}