#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int j=2; j<=n; j++){
		bool check = true;
		for(int i=2; i<=sqrt(j); i++){
			if(j%i==0){
			check = false;
			break;
		}
	}
		if(check){
			cout<<j<<" ";
		}
	}
}
		