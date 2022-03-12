#include<iostream>
using namespace std;

bool checkArrayRotatedAndSorted(int arr[], int size){
	int count=0;
	for(int i=1; i<=size; i++){
		if(arr[i-1]>arr[i%size]){
			count++;
		}
	}
//	if(arr[size-1]>arr[0]){
//		count++;
//	}

	return count<=1;
}
int main(){
	int arr[5]={4,5,1,2,3};
	cout<<checkArrayRotatedAndSorted(arr, 5);
	return 0;
}