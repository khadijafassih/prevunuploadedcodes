#include<iostream>
using namespace std;
int main()
{
	float V,I,p;
	cout<<"Enter voltage (in volts): ";
	cin>>V;
	cout<<"Enter current (in amperes): ";
	cin>>I;
	cout<<"The power is "<<V*I<<" watts.";
	return 0;
}
