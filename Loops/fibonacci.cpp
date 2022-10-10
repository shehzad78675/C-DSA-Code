#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=0;
	int b=1;
	
	for(int i=0; i<n; i++){
		if(i==0){
			cout<<a<<" ";
		}
//		}else if(i==1){
//			cout<<b<<" ";
//		}
else{
			int nextNumber=a+b;
			cout<<nextNumber<<" ";
			b=a;
			a = nextNumber;
		}
	}
	return 0;
}