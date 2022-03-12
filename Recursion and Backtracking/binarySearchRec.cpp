#include<iostream>
using namespace std;

bool binarySearchRec(int arr[], int key, int start, int end){
	int mid=start+(end-start)/2;
	if(start>end)
		return false;
	if(arr[mid]==key)
		return true;
	if(arr[mid]>key){
		end=mid-1;
	}else{
		start=mid+1;
	}
	return binarySearchRec(arr, key, start, end);	
}
int main(){
	int arr[6]={1,3,5,7,8,10};
	cout<<binarySearchRec(arr, 3, 0, 5);
	return 0;
}