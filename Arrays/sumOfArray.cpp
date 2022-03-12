#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
	if(size==1)
		return arr[0];
	return arr[0]+sumOfArray(arr+1, size-1);
}

int main(){
	int arr[5]={1,3,5,7,10};
	cout<<sumOfArray(arr, 5);
	return 0;
}