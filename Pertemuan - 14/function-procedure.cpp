#include <iostream>
using namespace std;

// Declaring a Procedure (void)
void greet()
{
    cout << "Hello there!";
}

// Declaring a Function (returns value)
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Calling the procedure
    greet();

    // Calling the function
    int sum = add(100, 78);

    cout << "\n100 + 78 = " << sum << endl;
    return 0;
}