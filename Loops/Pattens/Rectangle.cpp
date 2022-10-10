#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=n-i+1){
				
				cout<<j<<" ";
			}else{
				cout<<"* ";
			}
		}
		
		for(int j=n; j>=1; j--){
			if(j<=n-i+1){
				
				cout<<j<<" ";
			}else{
				cout<<"* ";
			}
		}
		
//		for(int)
//		for(int j=n-i+1; j>=1; j--){
//			cout<<j<<" ";
//		}
		cout<<endl;
	}
	return 0;
}