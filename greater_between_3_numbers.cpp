#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 3 numbers"<<endl;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"A is greater"<<a<<endl;
		}
		else{
			cout<<"C is greater"<<c<<endl;
			
		}
	}
	else{
		if(b>c)
		{
			cout<<"B is greater"<<b<<endl;
			
		}
		else{
			cout<<"C is greater"<<c<<endl;
		}
	}
	
}
