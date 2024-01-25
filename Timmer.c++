#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;
int main(){
short hours, minutes,seconds;
int time;
cout<<"Enter Hours::";
cin>>hours;
do{
    cout<<"Enter Minutes::";         //same for the minutes
    cin>>minutes;
}
while (minutes>59);
do{
    cout<<"Enter Seconds::";
    cin>>seconds;          //the value of seconds should be less than 60 if we give 60 or more than this than this loop will run again and we are using do while loop so that it will run at least once if this condition will be false than we have tho give the vlaue agian
}
while (seconds>59);



time=(hours!=0)?hours*60*60:0;
time+=(minutes!=0)?minutes*60:0; //after do-while loop we will get the value in minutes & seconds , if minutes is not equal to zero than it will be multi ply by the 60 and converted in into the seconds if the vale is zero than it will return zero and store thid into time
time+=seconds;             // add the value of seconds also in time
for(int i=time; i>0; i--){
    // system("clear"); it will print 'clear' when system wakes up  
    
    cout<<"The time remaining is "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    hours=(i%3600==0)?--hours:hours;

    if(i%3600==0){
        minutes=59;
    }
    else if (i%60==0){
        --minutes;
    }
    
    seconds=(seconds==0)?59 : --seconds;

    sleep(1);//it will helps to sleep the system for 1 second
}
// system("clear");
cout<<"\n\n\n\n\n\n**********************\nTime Ended!"<<"\n**************************\n\n\n\n\n\n\n\n"<<endl;
    return 0;
}