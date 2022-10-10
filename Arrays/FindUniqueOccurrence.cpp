#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findUniqueOccurrence(vector<int>& arr, int size){
	vector<int> ans;
	sort(arr.begin(), arr.end());
	for(int i=0; i<size; i++){
		int count = 1;
		for(int j=i+1; j<size; j++){
			if(arr[i] == arr[j]){
				count++;
			}else{
				break;
			}
		}
		ans.push_back(count);
		i=i+count;
	}
	
	int ans_size = ans.size();
	sort(ans.begin(), ans.end());
	for(int i=0; i<ans_size; i++){
		if(ans[i] == ans[i+1]){
			return false;
		}
	}
	
	return true;
}

int main(){
	vector<int> arr = {1,2};
	cout<<findUniqueOccurrence(arr, 6);
	return 0;
}