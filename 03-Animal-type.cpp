#include <iostream>
#include <string>
using namespace std;

int main()
{
    string animalName;
    cin >> animalName;

    if (animalName == "dog")
    {
        cout << "mammal" << endl;
    } else if (animalName == "crocodile" || animalName == "tortoise" || animalName == "snake")
    {
        cout << "reptile" << endl;
    } else
    {
        cout << "unknown" << endl;
    }
    

    return 0;
}