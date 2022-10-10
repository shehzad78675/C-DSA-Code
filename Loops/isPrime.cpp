#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	bool isPrime = true;
	
	for(int i=2; i*i/2<n; i++){
	
		if(n%i==0){
			isPrime = false;
			break;
		}
	}
	
	if(isPrime){
		cout<<"Prime Number";
	}else{
		cout<<"Not Prime Number";
	}
	return 0;
}