#include<iostream>
#include<vector>
using namespace std;

void solve(string str, int index, string output, vector<string>& ans){
	if(index>=str.length()){
		ans.push_back(output);
		return;
	}
	//exclude
	solve(str, index+1, output, ans);
	
	char element=str[index];
	output.push_back(element);
	
	//include
	solve(str, index+1, output, ans);
}
vector<string> subSequencesRec(string str){
	vector<string> ans;
	int index=0;
	string output="";
	solve(str, index, output, ans);
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
	vector<string> ans=subSequencesRec(str);
	print(ans);
	return 0;
}