#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
	int ans=1;
	
	while(n!=0){
		if(n&1){
			//odd
			ans=(1LL * ans * x%m)%m;
		}
		
		//even
		x=(1LL *x%m * x%m)%m;
		n=n/2;
	}
	return ans;
}
int main(){
	cout<<modularExponentiation(4,3,10);
	return 0;
}