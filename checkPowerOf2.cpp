#include<iostream>
using namespace std;

bool checkPowerOf2(int n){
	int count=0;
	while(n!=0){
		int bit=n&1;
		if(bit==1){
			count++;
		}
		n=n>>1;
	}
	if(count==1){
		return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	cout<<checkPowerOf2(n);
	return 0;
}