#include<iostream>
using namespace std;

void merge(int arr[], int start, int end){
	int mid=start+(end-start)/2;
	
	int len1=mid-start+1;
	int len2=end-mid;
	
	int *arr1=new int[len1];
	int *arr2=new int[len2];
	
	int mainArrayIndex=start;
	for(int i=0; i<len1; i++){
		arr1[i]=arr[mainArrayIndex++];
	}
	
	mainArrayIndex=mid+1;
	for(int i=0; i<len2; i++){
		arr2[i]=arr[mainArrayIndex++];
	}
	
	//merge
	int index1=0;
	int index2=0;
	mainArrayIndex=start;
	
	while(index1<len1 && index2<len2){
		if(arr1[index1]<arr2[index2]){
			arr[mainArrayIndex++]=arr1[index1++];
		}else{
			arr[mainArrayIndex++]=arr2[index2++];
		}
	}
	while(index1<len1){
		arr[mainArrayIndex++]=arr1[index1++];
	}
	
	while(index2<len2){
		arr[mainArrayIndex++]=arr2[index2++];
	}
	delete []arr1;
	delete []arr2;
}
void mergeSortRec(int arr[], int start, int end){
	if(start>=end){
		return;
	}
	int mid=start+(end-start)/2;
	//left array sorted
	mergeSortRec(arr, start, mid);
	//Right array sorted
	mergeSortRec(arr, mid+1, end);
	
	//merge arrays
	merge(arr, start, end);
}
void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[6]={6,2,1,9,4,3};
	print(arr, 6);
	mergeSortRec(arr, 0, 5);
	print(arr, 6);
	return 0;
}