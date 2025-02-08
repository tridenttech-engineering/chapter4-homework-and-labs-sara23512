//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Sarah Yaser Navarrete> on <02/08/2025>

#include <iostream>
using namespace std;

int main()
{
  //declare variables
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0; 
  const double PI = 3.14;

 //what is being asked for 
cout << "Height: ";
  cin >> height;
cout << "Radius: ";
  cin >> radius;
  
 // calculation and display of volume
volume = PI * radius * radius * height;
  
cout << "Volume: " << volume << endl;
  
return 0;


} //end of main function