#include<iostream>
using namespace std;
int main()
{
	float bit,KB,MB;
	cout<<"Enter the size in megabytes (MB): ";
	cin>>MB;
	cout<<MB<<" MB is equivalent to "<<MB*1024*1024*8<<" bits.";
	return 0;
}
