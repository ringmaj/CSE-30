#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

int arrSize;

int swap1;
int swap2;
int mIndex;

int numSwaps = 1;
bool inOrder;



cout << "Enter the size of the array:"<<endl;
cin >> arrSize;


if(arrSize<=0) {
	cout << "ERROR: you entered an incorrect value for the array size!"<<endl;

	}

if (arrSize >0){
	cout<<"Enter the numbers in the array, separated by a space, and press enter: ";

	int array1[arrSize];
	for(int i =0; i< arrSize; i++){
		scanf ("%d",&array1[i]);
		
	}

int min = array1[0];

for(int i=1; i< arrSize; i++) {
		if( array1[i] < min)
		{
			min = array1[i];
			mIndex=i;
		}

	}
//cout<< "minimum value: "<<min<<endl;

swap1 = array1[mIndex];
swap2 = array1[0];


array1[mIndex]= swap2;
array1[0] = swap1;


for(int i = 0; i <arrSize-1; i++){

cout<<" "<<endl;
cout<<" "<<endl;

for(int j=0; j <arrSize; j++){
	cout<<array2[j]<<" ";

		}



}



cout<<" "<<endl;
cout<<" "<<endl;
cout<< "This is the sorted array in ascending order: " <<endl;



}



}
