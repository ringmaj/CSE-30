#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

string str;

cout<< "Enter the string to reverse: "<<endl;
cin>>str;

cout<<"The reverse of the string is: ";
string reverse = string(str.rbegin(),str.rend());

cout<<reverse<<endl;


return 0;

}



