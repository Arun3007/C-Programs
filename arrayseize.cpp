#include<iostream>
using namespace std;
int main(){
	int arr[] ={1,2,3,4,4};
	int len = sizeof(arr) / sizeof(arr[0]);
	cout<<"Array length : "<<len<<endl;
}
