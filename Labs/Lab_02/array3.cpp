#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

int size;
int negative=0;


cout<<"Enter the size of a 2D array: "<<endl;
cin >>size;
int mat[size][size];


if(size >10 || size <= 0){
	
	cout<<"ERROR: your array is not within bounds! Enter 1 to 10."<<endl;
}

else{
	

	for(int i = 0; i< size; i++){
	cout<<"Enter the values in the array for row "<<(i+1)<<", separated by a space, and press enter: "<<endl;

		for(int j=0; j<size; j++){

			
			scanf("%d",&mat[i][j]);
			if(mat[i][j]<0){
				negative++;
				}
			


}

}

}

if(negative > 0){
	cout<< "There are "<<negative<<" negative numbers!"<<endl;

}


else{
	cout<<"All values are non-negative!"<<endl;
}

		

	


return 0;



} // final bracket
