#include <iostream>
using namespace std;

float perimeter(char shape, float value);

main()
{
    int value;
    char shape;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the second number: ";
    cin >> value;
    cout << perimeter(shape, value);
    return 0;
}

float perimeter(char shape, float value)
{
    if (shape == 'c')
    {
        return value * 6.28;
    }
    else if (shape == 's')
    {
        return value * 4;
    }
    else if (shape == 't')
    {
        return value * 3;
    }
    else
        return value * 6;
}