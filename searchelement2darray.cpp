#include<iostream>
using namespace std;
int main(){
	int n, m;
	int arr[n][m];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int x;
	cout<<"Enter element to be found"<<endl;
	cin>>x;
	
	bool flag = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==x){
				cout<<i<<" "<<j<<"\n";
				flag = true;
			}
		}
	}
	if(flag){
		cout<<"Found element";
	}
	else{
		cout<<"Not found";
	}
}
