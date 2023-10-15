#include<iostream>
using namespace std;
main()
{
	float m,i,e,a,b;
	string n;
	cout<<"Enter the student's name: ";
	cin>>n;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>m;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>i;
    cout<<"Enter Ecat marks (out of 400): ";
	cin>>e;
	b=(e/400*0.5)+(m/1100*0.1)+(i/550*0.4);
	a=b*100;
	cout<<"Aggregate score for "<<n<<" in UET is: "<<a<<"%";
	return 0;
}
