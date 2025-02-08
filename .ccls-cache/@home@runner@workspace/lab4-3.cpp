//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <Sarah Yaser Navarrete> on <02/08/2025>

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double commRate = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;

  // enter commission rate
  cout << "Commission rate: ";
  cin >> commRate;
  
  //calculate and display the commision
  commission = sales * commRate;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
