#include<iostream>
using namespace std;
main()
{
	float Q,t;
	float I;
	cout<<"Enter the charge (Q) in Coulombs: ";
	cin>>Q;
	cout<<"Enter the time (t) in seconds: ";
	cin>>t;
    I=Q/t;
	cout<<"The current (I) is: "<<I<<" Amperes";
	return 0;
}
