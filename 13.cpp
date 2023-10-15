#include <iostream>
using namespace std;

float lowestPrice(int n, string period)
{
    float taxiPrice, busPrice, trainPrice;
    taxiPrice = 0.70 + (period == "day" ? 0.79 : 0.90) * n;
    busPrice = 0.09 * n;
    trainPrice = 0.06 * n;
    if (n >= 100)
        return min(taxiPrice, min(busPrice, trainPrice));
    else if (n >= 20)
        return min(taxiPrice, busPrice);
    else
        return taxiPrice;
}
main()
{
    int n;
    string period;
    cout << "Enter the number of kilometers: ";
    cin >> n;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;
    cout << "Lowest price for " << n << " kilometers: " << lowestPrice(n, period) << " EUR";
}