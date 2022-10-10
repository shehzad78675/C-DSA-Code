#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	cout<<"Enter number ";
	cin>>n;
	
	int i = 0;
	while(i < 30){
		int powerOfTwo = pow(2, i);
		
		if(powerOfTwo == n){
			cout<<true;
			break;
		} 
		if(powerOfTwo > n){
			cout<<false;
			break;
		}
		i++;
	}
	return 0;
}