#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip> 


using namespace std;


struct Time 
{

int hour;
int minute;
int second;

};


bool getTimeFromUser(Time &time)
{
string input,hour,minute,second;



getline(cin,input);



  hour = input.substr(0, input.find(":"));
  minute = input.substr(input.find(":")+1, input.find(":"));
  second = input.substr(input.find_last_of(":")+1,input.find_last_of(":")+2 );


time.hour = atoi(hour.c_str());
time.minute = atoi(minute.c_str());
time.second = atoi(second.c_str());


if(time.hour >24 || time.minute> 59 || time.second >59)
{

return false;
}


return true;
}

void print24hour(Time time)
{


if(time.hour < 10 )
	 cout<<setfill('0')<<setw(2);
cout<<time.hour<<":";

if(time.minute < 10)
	cout<<setfill('0')<<setw(2);
cout<<time.minute<<":";

if(time.second < 10)
	cout<<setfill('0')<<setw(2);
cout<<time.second;





}




int main()
{

Time startTime;
Time endTime;

string start;
string end;




cout<<"Enter the start time for the lecture (format is HH:MM:SS): ";
bool correctStart = getTimeFromUser(startTime);




if(correctStart == false)
{

cout<<"The start time entered is invalid!"<<endl;
return 0;
}






cout<<"Enter the end time for the lecture (format is HH:MM:SS): ";
bool correctEnd = getTimeFromUser(endTime);

if(correctEnd == false)
{

cout<<"The end time entered is invalid!"<<endl;
return 0;

}





cout<<"The lecture starts at ";

print24hour(startTime);

cout<<" and ends at ";

print24hour(endTime);



cout<<""<<endl;
























return 0;
}











