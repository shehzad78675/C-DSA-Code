#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start=0;
	int end=size-1;
	
	while(start<=end){
		int mid= start + (end-start)/2;
		if(arr[mid]==key){
			return mid;
		}else if(key < arr[mid]){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int arr[6]={2,4,6,7,9,15};
	cout<<binarySearch(arr, 6, 7);
	return 0;
}