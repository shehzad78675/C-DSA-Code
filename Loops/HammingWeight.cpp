#include<iostream>

using namespace std;

int main(){
	uint32_t n;
	cout<<"Enter a number ";
	cin>>n;
	
	int count=0;
	while(n!=0){
//		n = n >> 1;
		if(n&1){
			count++;
		}
		
		n=n>>1;
	}
	
	cout<<count;
	return 0;
}