#include<iostream>
using namespace std;

int peakInMountain(int arr[], int size){
	int start=0;
	int end=size-1;
	
	while(start<end){
		int mid=start + (end-start)/2;
//		if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
//			return arr[mid];
//		}else if(arr[mid] < arr[mid+1]){
//			start=mid+1;
//		}else{
//			end=mid-1;
//		}
//	}
//	return -1;

		if(arr[mid]<arr[mid+1]){
			start=mid+1;
		}else{
			end=mid;
		}
	}
	return arr[start];
}
int main(){
	int arr[4]={0,10,5,2};
	cout<<peakInMountain(arr, 4);
	return 0;
}