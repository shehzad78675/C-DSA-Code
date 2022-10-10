#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortOneAndZero(int arr[], int n){
	int start = 0;
	int end = n-1;
 	
 	while(start < end){
 		while(arr[end] == 1 && start < end){
 			end--;
		 }
		 
		while(arr[start] == 0 && start < end){
 			start++;
		}
 		if(arr[start] > arr[end]){
 			
 			int temp = arr[start];
 			arr[start] = arr[end];
 			arr[end] = temp;
 			start++;
 			end--;
		}
		
	 }
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[8] = {1,1,0,0,0,0,1,0};
	sortOneAndZero(arr, 8);
	printArray(arr, 8);
	return 0;
}