#include<iostream>
using namespace std;

bool isPalindromeRec(string s, int start, int end){
	if(start>end){
		return true;
	}
	if(s[start]!=s[end]){
		return false;
	}
	
	return isPalindromeRec(s, start+1, end-1);
}
int main(){
	string s;
	cin>>s;
	cout<<isPalindromeRec(s, 0, s.length()-1);
	return 0;
}