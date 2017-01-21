#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

int arrSize;
bool increasing= true;

cout << "Enter the size of the array:"<<endl;
cin >> arrSize;


if(arrSize<=0) {
	cout << "ERROR: you entered an incorrect value for the array size!"<<endl;

	}

if (arrSize >0){
	cout<<"Enter the numbers in the array, separated by a space, and press enter: "<<endl;

	int array1[arrSize];
	for(int i =0; i< arrSize; i++){
		scanf ("%d",&array1[i]);
		
	}


for(int i=1; i< arrSize; i++) {
		if( array1[i] < array1[i-1])
		{
			increasing=false;
			cout<<"boolean: "+increasing<<endl;
			break;
		}
	


	}


	if(increasing==true){
cout<<increasing<<endl;
	cout<<"This IS an increasing array!"<<endl;
	}
	else {
cout<<increasing<<endl;
	cout<<"This is NOT an increasing array!"<<endl;
	}
	
}






	
	






return 0;

}




