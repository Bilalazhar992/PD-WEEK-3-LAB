#include <iostream>
using namespace std;
main ()
{
int sum;
int num;
int r;
sum = 0;
cout<<" Enter any four digit number ";
cin >> num;
r= num%10;
sum = sum + r;
num=num/10;
r=num%10;
sum = sum + r;
num=num/10;
r=num%10;
sum= sum + r;
num=num/10;
sum=sum+num;
cout<<"sum= "<<sum;
}