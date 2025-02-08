// Introductory11.cpp - displays ending balance
// Created/revised by <Sarah Yaser Navarrete> on <02/08/2025>

#include <iostream>
using namespace std;

int main() {
  // declare variables
  double startingBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double accountBalance = 0.0;

  //Calculations
  cout << "Starting balance: ";
    cin >> startingBalance;
  cout << "Deposits: ";
    cin >> deposits;
  cout << "Withdrawals: ";
    cin >> withdrawals;
  accountBalance = startingBalance + deposits - withdrawals;

  //Dislplaying account balance for the month 
  cout << "Account balance is : $" << accountBalance << endl;

  return 0;
} // end of main function