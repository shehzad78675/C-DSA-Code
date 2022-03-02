#include<iostream>
#include<array>

using namespace std;

int main(){
	
	array<int, 5> arr={1,2,3,4};
	
	cout<<arr.at(3)<<endl;
	cout<<arr.empty()<<endl;
	cout<<arr.back()<<endl;
	cout<<arr.front()<<endl;
	cout<<arr.size()<<endl;
	return 0;
}