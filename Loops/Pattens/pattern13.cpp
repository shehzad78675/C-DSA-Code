#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=n; j>=1; j--){
			if(j<=i){
				cout<<i-j+1<<" ";
			}else{
				cout<<"  ";
			}
		}
		
		for(int j=i-1; j>=1; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}