#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float n1,n2;
	cout << "Enter the distance from the base of the tree (in feet): ";
	cin >> n1;
    cout << "Enter the angle of elevation (in degrees): ";
	cin >> n2;
    float a= n2/57.2958;
    float h= tan(a)*n1;
	cout<< "The height of the tree is: "<<h<<" feet";
}

