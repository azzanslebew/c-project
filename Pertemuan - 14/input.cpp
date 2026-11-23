#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Hello " << name << ", your age is " << age << " years old.\n ";
    return 0;
}