#include <iostream>
using namespace std;
float payableAmount(string day, string month, float amount);

main()
{
    string day, month;
    float amount;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;
    cout << "Payable Amount after discount: " << payableAmount(day, month, amount);

    return 0;
}

float payableAmount(string day, string month, float amount)
{
    float pay;
    if (day == "Sunday" && (month == "October"||month =="March" || month =="August"))
    {
        pay = amount - (amount * 0.1);
    }
    return pay;
}