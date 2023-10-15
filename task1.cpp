#include <iostream>
using namespace std;

bool greaterNumber(int n1, int n2);

main()
{
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << greaterNumber(n1, n2);
    return 0;
}

bool greaterNumber(int n1, int n2)
{
    bool result;
    if (n1 > n2)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}