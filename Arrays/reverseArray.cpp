#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
	for(int i=0; i<size/2; i++){
//		if(i<=size-i-1){
			int tem=arr[i];
			arr[i]=arr[size-i-1];
			arr[size-i-1]=tem;
//		}else{
//			break;
//		}
	}
}

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[5]={1,2,3,4,5};
	print(arr, 5);
	reverseArray(arr, 5);
	print(arr, 5);
	return 0;
}