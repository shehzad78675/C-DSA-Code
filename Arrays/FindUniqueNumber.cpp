#include<iostream>

using namespace std;

int findUnique(int arr[], int size){
	int uniqueNumber = 0;
	for(int i=0; i<size; i++){
		uniqueNumber ^= arr[i];
	}
	return uniqueNumber;
}

int main(){
	int arr[5] = {1,2,3,1,2};
	cout<<findUnique(arr, 5);
	return 0;
}