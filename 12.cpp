#include <iostream>
using namespace std;

float earning(string screeningType, float rows, float columns)
{
    if (screeningType == "Premiere")
        return rows * columns * 12.00;
    else if (screeningType == "Normal")
        return rows * columns * 7.50;
    else if (screeningType == "Discount")
        return rows * columns * 5.00;
    else
        return 0;
}

main()
{

    string screeningType;
    float rows, columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> screeningType;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << earning(screeningType, rows, columns);
}