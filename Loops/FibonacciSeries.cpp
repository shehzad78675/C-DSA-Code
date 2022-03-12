#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=0;
	int b=1;
	for(int i=0; i<n; i++){
		if(i==0 || i==1){
			cout<<i<<" ";
		}else{
			int sum=a+b;
			cout<<sum<<" ";
			a=b;
			b=sum;
		}
		
	}
	
	return 0;
}