#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter a number: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday\n";
        break;
    case 2:
        cout << "Monday\n";
        break;
    default:
        cout << "Other day\n";
    }

    return 0;
}