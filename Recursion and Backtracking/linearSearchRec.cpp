#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int num){
	if(size==0)
		return false;
	if(arr[0]==num)
		return true;
	return linearSearch(arr+1, size-1, num);
}

int main(){
	int arr[5]={1,3,5,7,8};
	cout<<linearSearch(arr, 5, 1);
	return 0;
}