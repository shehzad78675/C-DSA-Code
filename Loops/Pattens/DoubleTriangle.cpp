#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
	
		for(int space = n- i; space>=1; space--){
			cout<<"  ";
		}

		for(int j = 1; j <= i; j++){
			cout<<j<<" ";
		}
		
		for(int start = i - 1; start>=1; start--){
			cout<<start<<" ";
		}
		cout<<endl;
	}
		 
			
}