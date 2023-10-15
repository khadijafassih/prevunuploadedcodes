#include<iostream>
using namespace std;
int main()
{
	int w,l,d;
	string n;
	cout<<"Enter the name of the cricket team: ";
	cin>>n;
	cout<<"Enter the number of wins: ";
	cin>>w;
	cout<<"Enter the number of draws: ";
	cin>>d;
	cout<<"Enter the number of losses: ";
	cin>>l;
	cout<<n<<" has obtained "<<w*3+d*1+l*0<<" points in the Asia Cup tournament.";
	return 0;
}
