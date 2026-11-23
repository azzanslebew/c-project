#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter score: ";
    cin >> score;

    if (score >= 80)
    {
        cout << "A\n";
    }
    else if (score >= 70)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "C\n";
    }

    return 0;
}