#include<iostream>
using namespace std;
int arraySort(int arr[], int n){
	if( n==0 || n==1)
	return 1;
	
	if(arr[n-1] < arr[ n-2]){
		return 0;
	}
	return (arr, n-1);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0 ;i<n;i++){
		cin>>arr[i];
	}
	if(arraySort(arr, n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
