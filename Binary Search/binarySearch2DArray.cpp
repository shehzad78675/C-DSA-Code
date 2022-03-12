#include<iostream>
#include<vector>
using namespace std;

bool binarySearch2DArray(vector<vector<int>> arr, int target){
	int row=arr.size();
	int col=arr[0].size();
	
	int start=0;
	int end=row*col-1;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		int element=arr[mid/col][mid%col];
		
		if(element==target){
			return true;
		}
		if(element>target){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return false;
}
int main(){
		vector<vector<int>> arr={
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
	};
	cout<<binarySearch2DArray(arr, 14);
	return 0;
}