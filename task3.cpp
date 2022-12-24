#include <iostream>
using namespace std;
main()
{
int vi;
int vf;
int acc;
int time;
cout<<" Enter initial velocity ";
cin >>vi;
cout<<" Enter acceleration ";
cin>>acc;
cout <<" Enter time ";
cin >>time;
vf = vi+acc*time;
cout<<" final acceleration= "<<vf;
}