#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter number ";
	cin>>n;
	
	if(n == 0){
        cout<<1;
    }else{
    	
        int mask = 0;
        int m = n;
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m>>1;
        }
        
        int ans = (~n) & mask;
        cout<<ans;
	}
	return 0;
}