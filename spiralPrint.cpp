#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> arr){
	
	vector<int> ans;
	int n=arr.size();
	int m=arr[0].size();
	
	int startingRow=0;
	int endingRow=n-1;
	int startingCol=0;
	int endingCol=m-1;
	
	int count=0;
	int total=n*m;
	
	while(count<total){
		for(int index=startingCol; count<total && index<=endingCol; index++){
			ans.push_back(arr[startingRow][index]);
			cout<<arr[startingRow][index]<<" ";
			count++;
		}
		startingRow++;
		
		for(int index=startingRow; count<total && index<=endingRow; index++){
			ans.push_back(arr[index][endingCol]);
			cout<<arr[index][endingCol]<<" ";
			count++;
		}
		endingCol--;
		
		for(int index=endingCol; count<total && index>=startingCol; index--){
			ans.push_back(arr[endingRow][index]);
			cout<<arr[endingRow][index]<<" ";
			count++;
		}
		endingRow--;
		
		for(int index=endingRow; count<total && index>=startingRow; index--){
			ans.push_back(arr[index][startingCol]);
			cout<<arr[index][startingCol]<<" ";
			count++;
		}
		startingCol++;
	}
	cout<<endl;
	return ans;
}
int main(){
	vector<vector<int>> arr={
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
	};
	vector<int> ans = spiralPrint(arr);
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}