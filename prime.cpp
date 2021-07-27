#include<iostream>
using namespace std;
int main()
{
	int n, div;
	div = 2;
	cout<<"Enter a number";
	cin>>n;
	while(div < n)
	{
		if(n%div==0){
			cout<<"Not prime";
			
		}
		else{
			div = div + 1;
		}
	}
	return 0;
	cout<<"prime";
	
}
