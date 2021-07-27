#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n)
{
	for(int i = 0;i<sqrt(n);i++){
		if(n%2==0)
		return false;
	}
	return true;
	
	
}
int main(){
	int a, b;
	cout<<"Enter Range of Prime number"<<endl;
	cin>>a>>b;
	
	for(int i=a;i<b;i++){
		if(isPrime(i)){
			cout<<i<<endl;
		}
	}
}
