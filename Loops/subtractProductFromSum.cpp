#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int product = 1;
	int sum = 0;
	while(n!=0){
		int temp = n%10;
		product *= temp;
		sum += temp;
		
		n = n/10;
	}
	
	cout<<"Product "<<product<<endl;
	cout<<"Sum "<<sum<<endl;
	
	cout<<"Subtract "<<product-sum;
	return 0;
}