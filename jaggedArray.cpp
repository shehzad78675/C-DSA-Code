#include<iostream>
using namespace std;

int main(){
	/*
	Jagged array is array of arrays such that member arrays can be of different sizes,
	i.e., we can create a 2-D array but with a variable number of columns in each row. 
	These type of arrays are also known as Jagged arrays.
	*/
	int row, col;
	cout<<"Enter number of rows ";
	cin>>row;
	int *size=new int[row];
	
	//creating array
	int **arr=new int*[row];
	for(int i=0; i<row; i++){
		cout<<"Enter number of columns for row "<<i+1<<" ";
		cin>>col;
		size[i]=col;
		arr[i]=new int[col];
	}
	
	//Taking input
	for(int i=0; i<row; i++){
		for(int j=0; j<size[i]; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<endl;
	//Printing output
	for(int i=0; i<row; i++){
		for(int j=0; j<size[i]; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<row; i++){
		delete [] arr[i];
	}
	
	delete []arr;
	delete []size;
	return 0;
}