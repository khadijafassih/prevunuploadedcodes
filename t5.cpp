#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float a,b,c,x,x1,x2,x11a,x11b,x22a,x22b;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
    cout << "Enter the value of c: ";
	cin >> c;
    float discriminent= (b*b)-4*a*c;
    //cout << -b+sqrt(discriminent)/2*a;
  if (discriminent==0)
   {  x= -b/2*a;
    cout << "Complex Solutions: x= "<<x;
   }
   if (discriminent>0)
   { x1= ((-b+sqrt(discriminent))/(2*a));
     x2= ((-b-sqrt(discriminent))/(2*a));
     cout << "Complex Solutions: x= "<<x1<<" and x= "<<x2;
   }
   if (discriminent<0)
   {  x11a= (-b/(2*a));
      x11b= (sqrt(-discriminent)/(2*a));
    cout<<"Complex Solutions: x = "<<x11a<<" + "<<x11b;
    cout<<"i and x = " <<x11a<<" - "<<x11b<<"i";
    } 
   }

