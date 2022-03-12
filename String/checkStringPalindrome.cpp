#include<iostream>
#include<vector>
using namespace std;

char toLowerCase(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}else{
		char temp=ch-'A'+'a';
		return temp;
	}
}
bool checkChar(char a){
	if((a>='A' && a<='Z') || (a>='a' && a<='z') || (a>='0' && a<='9')){
		return true;
	}
	return false;
}
bool palindrome(string ch){
	int start=0;
	int end=ch.length()-1;
	while(start<=end){
		bool sCheck=checkChar(ch[start]);
		bool eCheck=checkChar(ch[end]);
		
		if(sCheck==true && eCheck==true){
			
			if(toLowerCase(ch[start++])!=toLowerCase(ch[end--])){
				return false;
			}
		}else{
			if(sCheck==false){
				start++;
			}
			if(eCheck==false){
				end--;
			}
		}
	}
	return true;
}
int main(){
	string ch="H#1o23o 1h";
	cout<<palindrome(ch);
	return 0;
}