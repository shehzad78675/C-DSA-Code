#include<iostream>
using namespace std;

void reverseFromGivenPosition(int arr[], int size, int p){
	int end=size-1;
	int start = p+1;
	while(start<end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}
void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[5]={10,9,8,7,6};
	print(arr, 5);
	reverseFromGivenPosition(arr, 5, 0);
	print(arr, 5);
	return 0;
}