#include<iostream>
using namespace std;

void sayDigit(int n){
	if(n==0){
		return;
	}
	string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "saven", "eight", "nine"};
	int num=n%10;
	sayDigit(n/10);
	cout<<arr[num]<<" ";
}

int main(){
	int n;
	cin>>n;
	sayDigit(n);
}