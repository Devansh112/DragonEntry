#include<iostream>
#include<conio.h>
#include<ctime>
#include<fstream>

using namespace std;
int main()
{



int hour1,min1,sec1; //localtime
int hour2,min2,sec2; //user input time
int hour,min,sec; //total time output
int x,y,n;




    time_t t=time(0);
    tm* tmp = localtime(&t);
    hour1=tmp->tm_hour;
    min1=tmp->tm_min;
    sec1=tmp->tm_sec;
ofstream file("Dragons.txt");     //Deletes the Content of the File

cout<<"How many Dragons You want to Enter?"<<endl;
cin>>n;
while(n--)
{
cout<<"Enter time in Hour Min Sec for Fort"<<n+1<<endl;
cout<<"Hour"<<endl;
cin>>hour2;
cout<<"Minutes"<<endl;
cin>>min2;
cout<<"Seconds"<<endl;
cin>>sec2;


sec=sec1+sec2;
min=min1+min2+(sec/60);
hour=hour1+hour2+(min/60);
min=min%60;
sec=sec%60;

if(hour>=24)
{
    hour=hour-24;
    fstream out("Dragons.txt", ios::in | ios::out | ios::app);  //File name to write in
    out<<"Fort"<<n+1<<"Free at "<<hour<<" Hours "<<min<<" Min "<<sec<<" seconds"<<" of Next Day"<<endl;

}
else
{
fstream out("Dragons.txt", ios::in | ios::out | ios::app);  //File name to write in
out<<"Fort"<<n+1<<"Free at "<<hour<<" Hours "<<min<<" Min "<<sec<<" seconds"<<endl;
}
}

fstream out("Dragons.txt", ios::in | ios::out | ios::app);  //File name to write in
out<<"====>Coded By Goku<===="<<endl;

cout<<"Thanks For using this Software";
return 0;
}
