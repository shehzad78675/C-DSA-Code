#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> findIntersction(vector<int>& arr1, int n, vector<int> &arr2, int m){
 		int i=0, j=0;
 		vector<int> ans;
 		while(i<n && j<m){
 			if(arr1[i] == arr2[j]){
 				ans.push_back(arr1[i]);
 				i++;
 				j++;
			 }
			 
			if(arr1[i] < arr2[j]){
			 	i++;
			}
			 
			if(arr1[i] > arr2[j]){
				j++;
			}
		 }
		 return ans;
}

void printArray(vector<int>& arr){
	int size = arr.size();
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> arr1 = {1,2,2,2,3,4};
	vector<int> arr2 = {2,2,3,3};
	vector<int> ans = findIntersction(arr1, 6, arr2, 4);
	printArray(ans);
	return 0;
}