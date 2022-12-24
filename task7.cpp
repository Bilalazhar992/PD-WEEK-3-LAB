#include <iostream>
using namespace std;
main()
{
string movie_name;
int price1;
int price2;
int quantity1;
int quantity2;
int donation;
float donating_amount;
 int total_amount;
float new_donation ;
int new_amount;
cout<<" movie name ";
cin >> movie_name;
cout<<"Adult ticket price ";
cin>> price1;
cout<<" Child ticket price ";
cin >> price2;
cout <<" number of adult tickets sold ";
cin >> quantity1;
cout <<" number of child tickets sold ";
cin >> quantity2;
cout <<" Percentage of the amount to be donated to the charity ";
cin >> donation;
new_donation = donation/100;
total_amount= price1*quantity1 + price2*quantity2;
donating_amount = total_amount * new_donation ;
new_amount = total_amount - donating_amount;
cout <<" Bussiness of the movie " << new_amount;
}    