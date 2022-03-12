#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
	int pivot=arr[start];
	
	int count=0;
	
	for(int i=start+1; i<=end; i++){
		if(arr[i]<=pivot){
			count++;
		}
	}
	
	int pivotIndex=start+count;
	
	swap(arr[pivotIndex], arr[start]);
	
	int i=start, j=end;
	
	while(i<pivotIndex && j>pivotIndex){
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<pivotIndex && j>pivotIndex){
			swap(arr[i++], arr[j--]);
		}
	}
	return pivotIndex;
}
void quickSortRec(int arr[], int start, int end){
	if(start>=end){
		return;
	}
	int p=partition(arr, start, end);
	
	quickSortRec(arr, start, p-1);
	quickSortRec(arr, p+1, end);
}

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n=7;
	int arr[n]={2,1,9,4,3,4,3};
	print(arr, n);
	quickSortRec(arr, 0, n-1);
	print(arr, n);
	return 0;
}