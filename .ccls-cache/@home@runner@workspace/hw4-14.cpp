// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Sarah Yaser Navarrete> on <02/08/2025>

#include <iostream>
using namespace std;

int main() {

  //declaring variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  double total = 0.0;
  double smallContribution = 0.0;
  double mediumContribution = 0.0;
  double largeContribution = 0.0;
  double familyContribution = 0.0;

  //number of pizzas per size 
  cout << " Small pizzas sold: ";
    cin >> small;
  cout << " Medium pizzas sold: ";
    cin >> medium;
  cout << " Large pizzas sold: ";
    cin >> large;
  cout << " Family pizzas sold: ";
    cin >> family;

  //calculating total number of pizzas sold
  total = small + medium + large + family;

  //calculating contribution of each size
  smallContribution = (small / total) * 100;
  mediumContribution = (medium / total) * 100;
  largeContribution = (large / total) * 100;
  familyContribution = (family / total) * 100;

  //displaying both total sold and percentages of each size
  cout << "Total pizzas sold: " << total << endl;
  cout << "Contribution of small pizzas: " << smallContribution << endl;
  cout << "Contribution of medium pizzas: " << mediumContribution << endl;
  cout << "Contribution of large pizzas: " << largeContribution << endl;
  cout << "Contribution of family pizzas: " << familyContribution << endl;
  
  return 0;
} // end of main function