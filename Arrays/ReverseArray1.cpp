#include<iostream>

using namespace std;

void reverseArray(int arr[], int size){
	int start = 0;
	int end = size - 1;
	
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[6] = {1,2,3,4,5,6};
	reverseArray(arr, 6);
	printArray(arr, 6);
	return 0;
}