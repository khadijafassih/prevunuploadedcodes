#include<iostream>
using namespace std;
void feetConverter();
main()
{
	feetConverter();
}
 void feetConverter()
{
	float inches,feet;
	cout <<"Enter the measurement in inches: ";
	cin>> inches;
	feet=inches/12;
	cout <<"Eqvuivalent in feet: "<<feet;
	
}
