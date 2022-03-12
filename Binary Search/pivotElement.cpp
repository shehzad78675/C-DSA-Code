#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){
	int start=0;
	int end=size-1;
	
	while(start<end){
		int mid=start+(end-start)/2;
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}else{
			end=mid;
		}
	}
	return arr[start];
}
int main(){
	int arr[5]={2,3,4,5,6};
	cout<<pivotElement(arr, 5);
	return 0;
}