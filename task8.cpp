#include <iostream>
using namespace std;
main()
{
float friut_price;
float vegetable_price;
int quantity1;
int quantity2;
float total_coin;
float rupee;
cout <<" friut price pr kilogram ";
cin >>friut_price;
cout <<" vegetable price pr kilogram ";
cin>> vegetable_price ;
cout <<" quantity of friuts sold ";
cin >> quantity1;
cout <<" quantity of vegetables sold ";
cin >> quantity2;
total_coin = quantity1 * fruit_price + quantity2 * vegetable_price;
Rupee= total_coin/1.94;
cout <<" earning in rupee " << Rupee ;
}