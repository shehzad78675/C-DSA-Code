#include<iostream>
using namespace std;

int squareRoot(int n){
	int start=0;
	int end=n;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		if(mid*mid==n || (mid*mid<n && (mid+1)*(mid+1)>n)){
			return mid;
		}else if(mid*mid > n){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	cout<<squareRoot(n);
	return 0;
}