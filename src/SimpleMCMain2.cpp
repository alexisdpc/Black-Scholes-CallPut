/*
requires:
PayOff1.cpp
Random1.cpp,
SimpleMC.cpp,
*/

#include "SimpleMC.h"
#include <iostream>
using namespace std;

int main()
{
  double Expiry;
  double Strike;
  double Spot;
  double Vol;
  double r;
  unsigned long NumberOfPaths; // Non-negative integer

  cout << "\nEnter expiry\n";
  cin >> Expiry;

  cout << "\nEnter strike\n";
  cin >> Strike;

  cout << "\nEnter spot\n";
  cin >> Spot;

  cout << "\nEnter vol\n";
  cin >> Vol;

  cout << "\nr\n";
  cin >> r;

  cout << "\nNumber of paths\n";
  cin >> NumberOfPaths;

  // Create different objects of PayOff (this calls the constructor).
  PayOff callPayOff(Strike, PayOff::call);
  PayOff putPayOff(Strike, PayOff::put);
  PayOff digitalPayOff(Strike, PayOff::digital);

  double resultCall = SimpleMonteCarlo2(callPayOff, Expiry, Spot, Vol, r, NumberOfPaths);
  double resultPut = SimpleMonteCarlo2(putPayOff, Expiry, Spot, Vol, r, NumberOfPaths);
  double resultDigital = SimpleMonteCarlo2(digitalPayOff, Expiry, Spot, Vol, r, NumberOfPaths);

  cout <<"\n The prices are: " << resultCall
                           << " for the call, "
                           << resultPut
                           << " for the put and "
                           << resultDigital
                           << " for the digital option.\n\n";

  return 0;

}