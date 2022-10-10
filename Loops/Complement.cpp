#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
	int n;
	cout<<"Enter number ";
	cin>>n;
	
	string binary = "";
	if(n == 0){
		binary = "1";
	}
	while(n!=0){
		int bit = n%2;
		if(bit == 1){
			binary = binary + to_string(0);
		}else{
			binary = binary + to_string(1);
		}
	
		n=n/2;
	}
	
	reverse(binary.begin(), binary.end());
	
	int leng = binary.length() - 1;
	int number = 0;
	int i = 0;
	while(leng >= 0){
		char bit = binary[leng];
		if(bit == '1'){
			number = number + pow(2, i);
		}
		leng--;
		i++;
	}
	
	cout<<binary<<endl<<number;
	return 0;
}