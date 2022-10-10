 #include<iostream>
 #include<vector>

using namespace std;

int peekIndexInMountainArray(int arr[], int size){
	int start = 0;
	int end = size-1;
	
	int mid = start + (end-start)/2;
	while(start < end){
//		if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
//			return arr[mid];
//		}
		
		if(arr[mid] < arr[mid+1]){
			start = mid+1;
		}else{
			end = mid;
		}
		mid = start + (end-start)/2;
	}
	return start;
}

int main(){
	int arr[6] = {0,2,3,4,2,1};
	cout<<peekIndexInMountainArray(arr, 6);
	return 0;
}