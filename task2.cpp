#include<iostream>
using namespace std;
main()
{
	float kgs=0.45;
	float lbs;
	float convertedValue;
	cout<<"Enter weight in pounds: ";
	cin>>lbs;
    convertedValue=lbs*0.45;
	cout<<lbs<<" pounds is equal to "<<convertedValue<<" kilograms.";
	return 0;
}
