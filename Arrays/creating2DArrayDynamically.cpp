#include<iostream>
using namespace std;

int main(){
	int row, col;
	cout<<"Enter number of rows ";
	cin>>row;
	cout<<"Enter number of columns ";
	cin>>col;
	
	//creating array
	int **arr=new int*[row];
	for(int i=0; i<row; i++){
		arr[i]=new int[col];
	}
	
	//Taking input
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<endl;
	//Printing output
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<row; i++){
		delete [] arr[i];
	}
	
	delete []arr;
	return 0;
}