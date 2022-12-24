#include <iostream>
using namespace std;
main()
{
string name;
int mark1;
int mark2;
int mark3;
int mark4;
int mark5;
int sum;

float percentage; 
cout<<" Student Name ";
cin>>name;
cout<<" enter mark1 ";
cin>>mark1;
cout<<" enter mark2 ";
cin>>mark2;
cout<<" enter mark3 ";
cin>>mark3;
cout<<" enter mark4 ";
cin>>mark4;
cout<<" enter mark5 ";
cin>>mark5;
sum= mark1 + mark2+ mark3+ mark4 +mark5;

percentage= (sum*100)/500;
cout <<" percentage of "<< name << percentage;
}