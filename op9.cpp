#include<iostream>
using namespace std;
void add(int a,int b);
void mul(int a,int b);
void divide(int a,int b);
void sub(int a,int b);
main()
{	int a,b;
    char op;
    while(1)
	{
	cout <<"Enter Number1: ";
	cin>>a;
	cout <<"Enter Number2: ";
	cin>>b;
	cout <<"Enter Operator(+,-,/,*): ";
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
}
void add(int a,int b)
{
	cout <<"Addition: "<<a+b<<endl;
}
void mul(int a,int b)
{
	
	cout <<"Multiplication: "<<a*b<<endl;
}
void divide(int a,int b)
{
	
	cout <<"Division: "<<a/b<<endl;
}
void sub(int a,int b)
{
	
	cout <<"Subtraction: "<<a-b<<endl;
}
