#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> arr, int index, vector<int> output, vector<vector<int>>& ans){
	if(index >= arr.size()){
		ans.push_back(output);
		return;
	}
	//exclude
	solve(arr, index+1, output, ans);
	
	//include
	int element=arr[index];
	output.push_back(element);
	solve(arr, index+1, output, ans);
}
vector<vector<int>> subSets(vector<int> arr, vector<vector<int>> &ans){
//	vector<vector<int>> ans;
	vector<int> output;
	int index=0;
	solve(arr, index, output, ans);
	return ans;
}

void print(vector<int> arr){
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n=7;
	vector<int> arr={1,2,3};
	print(arr);
	vector<vector<int>> ans;
	subSets(arr, ans);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
//		print(ans[i]);
	}

    
	return 0;
}