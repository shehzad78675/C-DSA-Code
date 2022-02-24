#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool check = true;
	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			cout<<"Not Prime";
			check = false;
			break;
		}
	}
	if(n == 1){
		cout<<"Not Prime";
	}else if(check){
		cout<<"Prime";
	}
	
	return 0;
}