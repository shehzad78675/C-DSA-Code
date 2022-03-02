#include<iostream>
using namespace std;

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void  mergeTwoSortedArray(int arr1[], int n, int arr2[], int m){
	int i=0;
	int j=0;
	int count=0;
	int arr[n+m]={0};
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
	for(int i=0; i<n+m; i++){
		arr1[i]=arr[i];
	}
}

int main(){
	int arr1[13]={1,4,7,9,10};
	int arr2[8]={0,2,4,5,8,9,11,13};
	mergeTwoSortedArray(arr1, 5, arr2, 8);
	print(arr1, 13);
	return 0;
}