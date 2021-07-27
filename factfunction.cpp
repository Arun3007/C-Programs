#include<iostream>
using namespace std;
int fact(int n)
{
	int temp = 1;
	for(int i = 2;i<=n;i++)
	{
		temp = temp * i;
	}
	return temp;
}
int main()
{
	int n;
	cin>>n;
	int ans = fact(n);
	cout<<ans;
}
