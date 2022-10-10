#include<iostream>
#include<math.h>

using namespace std;

int factorial(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	
	return n * factorial(n - 1);
}

int nCr(int n, int r){
	return factorial(n) / (factorial(r) * factorial(n-r));
}
int main(){
	int n, r;
	cout<<"Enter n ";
	cin>>n;
	cout<<"Enter r ";
	cin>>r;
	
	cout<<nCr(n, r);
	return 0;
}