#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

string reverseString(string s){
	int start = 0;
	int end = s.length()-1;
	
	while(start < end){
		
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		
		start++;
		end--;
	}
	
	return s;
}

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
//	int ans=0;
//	int i = 0;

	string binaryNumber = "";
	while(n!=0){
	 	binaryNumber = binaryNumber + to_string(n%2);
	 	n=n/2;

//		int bit = n&1;
//		ans = (bit * pow(10, i)) + ans;
//		
//		n=n>>1;
//		i++;
	}
	
//	reverse(binaryNumber.begin(), binaryNumber.end());

//	cout<<binaryNumber;
	
//	cout<<ans;

	cout<<reverseString(binaryNumber);
	return 0;
}