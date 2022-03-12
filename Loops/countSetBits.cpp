#include<iostream>
using namespace std;

int setBits(int a, int b){
	int count=0;
	while(a!=0 || b!=0){
		int aBit=a&1;
		int bBit=b&1;
		if(aBit==1){
			count++;
		}
		if(bBit==1){
			count++;
		}
		a=a>>1;
		b=b>>1;
	}
	return count;
}
int main(){
	int a,b;
	cout<<"Enter value of a ";
	cin>>a;
	cout<<"Enter value of b ";
	cin>>b;
	cout<<setBits(a, b);
	return 0;
}