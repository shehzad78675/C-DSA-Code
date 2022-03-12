#include<iostream>
using namespace std;

int powerRec(int a, int b){
	if(b==0){
		return 1;
	}
	
	if(b==1){
		return a;
	}
	
	int ans=powerRec(a, b/2);
	
	if(b%2==0){
		return ans*ans;
	}else{
		return a*ans*ans;
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<powerRec(a, b);
	return 0;
}