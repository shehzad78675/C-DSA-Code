#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
	int count = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<char('A' + count)<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}