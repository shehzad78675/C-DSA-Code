#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
	int a = 0;
	int b = 1;
	for(int i = 0; i<n; i++){
		int temp = b;
		cout<<a<<" ";
		b=a;
		a = b+temp;
	}
	return 0;
}