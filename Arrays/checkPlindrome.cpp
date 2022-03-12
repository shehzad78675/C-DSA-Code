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
bool palindrome(char ch[], int len){
	int start=0;
	int end=len-1;
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
	char ch[]="H1o2@o 1h";
	int len=length(ch);
	cout<<palindrome(ch, len);
	return 0;
}