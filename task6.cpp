#include <iostream>
using namespace std;
main()
{
float pound;
float area;
float cost_bag;
float cost_per_pound;
float cost_per_sq_feet;
cout <<" Enter weight in pounds ";
cin >> pound;
cout <<" Enter area in sq.feet of bag ";
cin>> area;
cout<<" cost of bag ";
cin>> cost_bag;
cost_per_pound = cost_bag/pound;
cost_per_sq_feet = cost_bag/area;
cout<<" Cost of fertilizer per pound "<< cost_per_pound;
cout<<" Cost of fertilizer per sq.feet "<<cost_per_sq_feet;
}
