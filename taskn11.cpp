#include<iostream>
using namespace std;
int main()
{
    int y,b;
	cout<<"Enter the current world population: ";
	cin>>y;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>b;
	cout<<"The population in three decades will be: "<<y+b*360;
	return 0;
}
