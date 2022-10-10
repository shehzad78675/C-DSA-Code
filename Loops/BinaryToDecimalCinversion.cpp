#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int binary;
	cout<<"Enter binary number ";
	cin>>binary;
	
	int i = 0;
	int decimal = 0;
	while(binary!=0){
		decimal = decimal + (pow(2, i) * (binary%10));
		binary=binary/10;
		i++;
	}
	
	cout<<decimal;
	return 0;
}