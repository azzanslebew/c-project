#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    cout << "Do-While Loop " << endl;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 5);

    cout << "\n";
    cout << "While Loop " << endl;
    int j = 1;
    while (j <= 5)
    {
        cout << j << " ";
        j++;
    }

    cout << "\n";
    cout << "For Loop " << endl;
    for (int k = 1; k <= 5; k++)
    {
        cout << k << " ";
    }
}