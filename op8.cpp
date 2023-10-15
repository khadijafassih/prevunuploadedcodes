#include<iostream>
using namespace std;
main()
{
int amount;
string day;
cout<< "Enter the day of purchase: ";
cin>> day;
cout<< "Enter the total purchase amount: $";
cin>> amount;
if (day == "Sunday")
  { int d=(amount*10)/100;
  cout<<"Payable Amount: $"<<amount-d<<endl;
	  }	
else
{ cout<<"Payable Amount: $"<<amount;
	}	
}


