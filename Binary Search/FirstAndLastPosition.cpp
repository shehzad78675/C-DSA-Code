 #include<iostream>
 #include<vector>

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

vector<int> firstAndLastPosition(int arr[], int size, int n){
	vector<int>  ans;
	ans.push_back(firstPosition(arr, size, n));
	ans.push_back(lastPosition(arr, size, n));
	return ans;
}

void printArray(vector<int> arr, int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[5] = {1,2,3,3,4};
	printArray(firstAndLastPosition(arr, 5, 3), 2);
	return 0;
}