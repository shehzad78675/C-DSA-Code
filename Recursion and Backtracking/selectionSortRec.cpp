#include<iostream>
using namespace std;

void selectionSortRec(int arr[], int size){
	if(size==0 || size==1){
		return;
	}
	int max=0;
	for(int i=1; i<size; i++){
		if(arr[i]>arr[max]){
			max=i;
		}
	}
	swap(arr[max], arr[size-1]);
	selectionSortRec(arr, size-1);
}
void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[5]={5,2,1,7,3};
	print(arr, 5);
	selectionSortRec(arr, 5);
	print(arr, 5);
	return 0;
}