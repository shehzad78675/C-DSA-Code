#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			char alp = 'A' + j + i - 1;
			cout<<alp<<" ";
		}
		cout<<endl;
	}
	return 0;
}