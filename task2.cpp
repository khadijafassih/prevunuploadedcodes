#include <iostream>
using namespace std;

bool parityAnalysis( int number);

main()
{
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    cout << parityAnalysis(number);

    return 0;
}

bool parityAnalysis(int number)
{
    bool result;
    int mod1 = number % 10;
    int n1 = number / 10;
    int mod2 = number % 10;
    int n2 = number / 10;
    int mod3 = number % 10;
    int n3 = number / 10;
    int sum = n1 + n2 + n3;
    if (sum / 2 == 0)
        result = true;
    else
        result = false;
    return result;
}