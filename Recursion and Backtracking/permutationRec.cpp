#include<iostream>
#include<vector>
using namespace std;

void solve(string str, int index, vector<string>& ans){
	if(index>=str.length()){
		ans.push_back(str);
		return;
	}
	for(int i=index; i<str.length(); i++){
		swap(str[i], str[index]);
		solve(str, index+1, ans);
		//backtracking
		swap(str[i], str[index]);
//abc acb bac bca cab cba
	}
}
vector<string> permutationRec(string str){
	vector<string> ans;
	int index=0;
	solve(str, index, ans);
	return ans;
}

void print(vector<string> arr){
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	string str;
	cin>>str;
	vector<string> ans=permutationRec(str);
	print(ans);
	return 0;
}