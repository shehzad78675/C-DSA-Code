#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> arr){
	int n=arr.size()-1;
	int i=0;
	while(i<n){
		swap(arr[i++], arr[n--]);
	}
	return arr;
}
vector<int> findSumOfArray(int arr1[], int n, int arr2[], int m){
	vector<int> arr;
	int num1=0;
	int num2=0;
	for(int i=0; i<n; i++){
		num1=(num1*10)+arr1[i];
	}
	for(int i=0; i<m; i++){
		num2=(num2*10)+arr2[i];
	}
	cout<<num1<<" "<<num2<<endl;
	int sum=num1+num2;
	cout<<sum<<endl;
	
	while(sum!=0){
		int temp=sum%10;
		arr.push_back(temp);
		sum=sum/10;
	}
	return reverse(arr);
//	return arr;
}
int main(){
	int arr1[4]={9,9,9,9};
	int arr2[1]={6};
	vector<int> arr=findSumOfArray(arr1, 4, arr2, 1);
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}