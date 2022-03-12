#include<iostream>
using namespace std;

void  mergeTwoSortedArray(int arr1[], int n, int arr2[], int m, int arr[], int size){
	int i=0;
	int j=0;
	int count=0;
//	int arr[n+m];
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			arr[count++]=arr1[i++];
		}else{
			arr[count++]=arr2[j++];
		}
	}
	while(i<n){
		arr[count++]=arr1[i++];
	}
	while(j<m){
		arr[count++]=arr2[j++];
	}
//	arr1[n+m];
//	for(int i=0; i<n+m; i++){
//		arr1[i]=arr[i];
//	}
}
void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr1[5]={1,4,7,9,10};
	int arr2[8]={0,2,4,5,8,9,11,13};
	int arr[13]={0};
	mergeTwoSortedArray(arr1, 5, arr2, 8, arr, 13);
	print(arr, 13);
	return 0;
}