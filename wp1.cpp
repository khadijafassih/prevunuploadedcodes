#include<iostream>
using namespace std;
void add(float a,float b);
void mul(float a,float b);
void divide(float a,float b);
void sub(float a,float b);
main()
{	float a,b;
	cout <<"Enter 1st number: ";
	cin>>a;
	cout <<"Enter 2nd number: ";
	cin>>b;
	char op;
	cout <<"Enter an operator (+, -, *, /): ";
	cin>>op;
        	if(op=='+')
            {
               	add(a,b);
	        }
	        	if(op=='*')
            {
            	
               	mul(a,b);
	        }
	        	if(op=='/')
            {
            	
               	divide(a,b);
	        }
	        	if(op=='-')
            {
            	
               	sub(a,b);
	        }
}

void add(float a,float b)
{
	cout <<"Sum: "<<a+b;
}
void mul(float a,float b)
{
	
	cout <<"Multiplication: "<<a*b;
}
void divide(float a,float b)
{
	
	cout <<"Division: "<<a/b;
}
void sub(float a,float b)
{
	
	cout <<"Subtraction: "<<a-b;
}
