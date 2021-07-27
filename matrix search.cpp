#include<iostream>
using namespace std;
int main(){
	int n1, n2;
	cin>>n1, n2;
	int arr[n1][n2];
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>arr[n1][n2];
		}
	}
	int key;
	cin>>key;
	int r = 0 ;
	int c= n2-1;
	bool ans;
	while(r < n1 && c>=0){
		if(arr[r][c]==key){
			ans = true;
		}
		if(arr[r][c] < key){
			c--;
			
		}
		else{
			c++;
		}
	}
	if(ans){
		cout<<"found";
		
	}
	else{
		cout<<"not found";
	}
	return 0;
}
