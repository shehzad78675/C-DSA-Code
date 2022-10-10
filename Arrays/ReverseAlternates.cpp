#include<iostream>

using namespace std;

void reverseAlternates(int arr[], int size){
	for(int i=0; i<size; i+=2){
		if(arr[i+1]){
			
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
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
	int arr[5] = {1,2,3,4,5};
	reverseAlternates(arr, 5);
	printArray(arr, 5);
	return 0;
}