#include <iostream>
#include <string>
using namespace std;

int main()
{
    string town;
    cin >> town;
    double sales;
    cin >> sales;

    double commission = 0.0;

    if (town == "Sofia")
    {
        if (sales >= 0 && sales <= 500)
        {
            commission = 0.05;
        } else if (sales > 500 && sales <= 1000)
        {
            commission = 0.07;
        } else if (sales > 1000 && sales <= 10000)
        {
            commission = 0.08;
        } else if (sales > 10000)
        {
            commission = 0.12;
        }
    } else if (town == "Varna")
    {
        if (sales >= 0 && sales <= 500)
        {
            commission = 0.045;
        } else if (sales > 500 && sales <= 1000)
        {
            commission = 0.075;
        } else if (sales > 1000 && sales <= 10000)
        {
            commission = 0.10;
        } else if (sales > 10000)
        {
            commission = 0.13;
        }
    } else if ( town == "Plovdiv")
    {
        if (sales >= 0 && sales <= 500)
        {
            commission = 0.055;
        } else if (sales > 500 && sales <= 1000)
        {
            commission = 0.08;
        } else if (sales > 1000 && sales <= 10000)
        {
            commission = 0.12;
        } else if (sales > 10000)
        {
            commission = 0.145;
        }
    }

    if (commission > 0)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
    
        cout << sales * commission << endl;
    } else
    {
        cout << "error" << endl;
    }
    
    return 0;
}