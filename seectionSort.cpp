#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
	for(int i=0; i<size-1; i++){
		int minIndex=i;
		for(int j=i+1; j<size; j++){
			if(arr[minIndex]>arr[j]){
				minIndex=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
}

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[5]={5,2,7,3,1};
	print(arr, 5);
	selectionSort(arr, 5);
	print(arr, 5);
	return 0;
}