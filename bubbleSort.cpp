#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	for(int i=0; i<size-1; i++){
		bool sorted=true;
		for(int j=0; j<size-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sorted=false;
			}
		}
		if(sorted==true){
			break;
		}
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
	bubbleSort(arr, 5);
	print(arr, 5);
	return 0;
}