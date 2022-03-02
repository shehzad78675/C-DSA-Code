#include<iostream>
using namespace std;

void rotateArrayGivenPosition(int arr[], int size, int p){
//	for(int i=size-1;i>p;i--){
//		int temp=arr[size-1];
//		cout<<arr[i]<<endl;
//		int j=size-1;
//		for(;j>0;j--){
//			arr[j]=arr[j-1];
//			cout<<j<<" "<<arr[j]<<endl;
//		} 
//		arr[j]=temp;
//	}

	int temp[size];
	for(int i=0; i<size; i++){
		temp[(i+p)%size]=arr[i];
	}
	for(int i=0; i<size; i++){
		arr[i]=temp[i];
	}
}
void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[7]={1,2,3,4,5,6,7};
	print(arr, 7);
	rotateArrayGivenPosition(arr, 7, 3);
	print(arr, 7);
	return 0;
}