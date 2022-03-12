#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
//	int num=fibonacci(n-1) + fibonacci(n-2);
//	cout<<num<<" ";
//	return num;
	return fibonacci(n-1) + fibonacci(n-2);
//	cout<<num<<" ";
}
int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}