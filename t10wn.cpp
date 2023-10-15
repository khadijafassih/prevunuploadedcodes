#include<iostream>
using namespace std;
float min(float number1, float number2);
main()
{
	float n1,n2,min1;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	min(n1,n2);
	min1= min(n1,n2);
	cout<< "The minimum of "<<n1<<" and "<<n2<<" is: "<<min1;
}

float min(float number1,float number2)
{ float min;
  if (number1 < number2)
  {min= number1;
	  }	
	  else
	  {min= number2;
	  }
 return min;	  
}
