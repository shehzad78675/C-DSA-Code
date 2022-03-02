#include<iostream>
#include<vector>
using namespace std;

int length(char ch[]){
	int i=0;
	int count=0;
	while(ch[i]!='\0'){
		count++;
		i++;
	}
	return count;
}
bool palindrome(char ch[], int len){
	int start=0;
	int end=len-1;
	while(start<end){
		if(ch[start++]!=ch[end--]){
			return false;
		}
	}
	return true;
	
}
int main(){
	char ch[]="hooh";
	int len=length(ch);
	cout<<palindrome(ch, len);
	return 0;
}