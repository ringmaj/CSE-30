#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

int arrSize;
int key;
int checks=1;
int index=0;

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




cout<<"Enter a number to search for in the array: ";
cin >> key;




for(int i =0; i< arrSize; i++){
	if (array1[i] == key){
		break;
		}
	else {
		index++;
		checks++;
		}
}

cout<<"Found value "<< key <<" at index "<< index << " which took "<< checks << " checks." <<endl;

cout<< "arrsize"<<arrSize<<endl;
if (checks = 1 ) {
	cout<< "We ran into the best case scenario!"<<endl;
		}

else if (checks = arrSize){
	cout<< "We ran into the worst case scenario!"<<endl;
		}































}

}
