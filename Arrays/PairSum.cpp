#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> pairSum(vector<int>& arr, int s){
	vector<vector<int>> ans;
	for(int i=0; i<arr.size(); i++){
		for(int j=i+1; j<arr.size(); j++){
			if(arr[i] + arr[j] == s){
				vector<int> temp;
				temp.push_back(min(arr[i], arr[j]));
				temp.push_back(max(arr[i], arr[j]));
				
				ans.push_back(temp);
			}
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}

void printArray(vector<vector<int>>& arr){
	int size = arr.size();
	for(int i=0; i<size; i++){
		for(int j=0; j<arr[i].size(); j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	vector<int> arr = {2, -3, 3, 3, -2};
	vector<vector<int>> ans = pairSum(arr, 0);
	printArray(ans);
	return 0;
}