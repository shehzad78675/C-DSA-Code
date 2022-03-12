#include<iostream>
using namespace std;

void moveZeroes(int arr[], int size){
	int i=0;
	int j=0;
	
	while(j<size){
		if(arr[j]!=0){
			swap(arr[i], arr[j]);
			i++;
		}
		j++;
	}
}
void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[5]={1,0,3,0,12};
	print(arr, 5);
	moveZeroes(arr, 5);
	print(arr, 5);
	return 0;
}