#include<iostream>
using namespace std;

void reverseStringRec(string &s, int start, int end){
	if(start>end){
		return;
	}
	char temp=s[start];
	s[start]=s[end];
	s[end]=temp;
	reverseStringRec(s, start+1, end-1);
}
int main(){
	string s;
	cin>>s;
	reverseStringRec(s, 0, s.length()-1);
	cout<<s;
	return 0;
}