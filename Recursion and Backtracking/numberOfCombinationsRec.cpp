#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	int fact=1;
	for(int i=1; i<=n; i++){
		fact=fact*i;
	}
	return fact;
}
int combination(int n, int r){
	int ans=factorial(n)/(factorial(r)*factorial(n-r));
	
	return ans;
}

int main(){
	int n,r;
	cout<<"Enter value of n ";
	cin>>n;
	cout<<"Enter value of r ";
	cin>>r;
	cout<<combination(n, r);
	return 0;
}