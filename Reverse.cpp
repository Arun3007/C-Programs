#include<iostream>
using namespace std;
int reverse(int n)
{
	int lastdigit, rev;
	while(n>0)
	{
		lastdigit = n % 10;
		rev = rev * 10 + lastdigit;
		n = n/10;
	}
	return rev;	
}
int main()
{
	int n;
	cin>>n;
	cout<<reverse(n);
}
