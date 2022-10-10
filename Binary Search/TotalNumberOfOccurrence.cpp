 #include<iostream>

using namespace std;

int firstPosition(int arr[], int size, int n){
	int start = 0;
	int end = size-1;
	int ans = -1;
	
	int mid = start + (end-start)/2;
	while(start <= end){
		
		if(arr[mid] == n){
			ans=mid;
			end = mid-1;
		}else if(arr[mid] > n){
			end = mid-1;
		}else{
			start = mid+1;
		}
		
		mid = start + (end-start)/2;
	}
	return ans;
}

int lastPosition(int arr[], int size, int n){
	int start = 0;
	int end = size-1;
	int ans = -1;
	
	int mid = start + (end-start)/2;
	while(start <= end){
		
		if(arr[mid] == n){
			ans=mid;
			start = mid+1;
		}else if(arr[mid] > n){
			end = mid-1;
		}else{
			start = mid+1;
		}
		
		mid = start + (end-start)/2;
	}
	return ans;
}

int totalNumberOfOccurrence(int arr[], int size, int n){
	return lastPosition(arr, size, n) - firstPosition(arr, size, n) + 1;
}

int main(){
	int arr[7] = {1,2,3,4};
	cout<<totalNumberOfOccurrence(arr, 7, 3);
	return 0;
}