#include <iostream>
using namespace std;

float calculateArea(float p, float l)
{
    return p * l;
}

float calculatePerimeter(float p, float l)
{
    return 2 * (p + l);
}

void displayResults(float area, float perimeter)
{
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

int main()
{
    float length, width, area, perimeter;

    cout << "=== Rectangle Calculator ===" << endl;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    area = calculateArea(length, width);
    perimeter = calculatePerimeter(length, width);
    displayResults(area, perimeter);

    return 0;
}