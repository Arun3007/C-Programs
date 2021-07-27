#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%2==0)
		{
			cout<<"Non prime";
			break;
		}
	}
	if(i==n)
	{
		cout<<"prime";
	}
	
}
