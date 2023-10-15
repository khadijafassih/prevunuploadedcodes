#include<iostream>
using namespace std;
//void CubeSides();
main()
{
 /*CubeSides();	
}
void CubeSides()
{*/
	int sides;
	cout <<"Enter the side length of the Rubik's Cube: ";
	cin>>sides;
   // stickers=(sides^2)*6;
	cout <<"Number of stickers needed: "<<sides*sides*6;
}
