#include "PayOff1.h"
#include <algorithm>
using namespace std;

// Constructor
PayOff::PayOff(double Strike_, OptionType TheOptionsType_):
  Strike(Strike_), TheOptionsType(TheOptionsType_) {}  

// Main method of the class. Returns value of payoff.
// Mark as 'const' since it will not modify the state of the object.
// We overload operator() so that the object appears like a function
double PayOff::operator()(double spot) const
{
  switch (TheOptionsType)
  {

   case call:
     return max(spot-Strike, 0.0);

   case put:
     return max(Strike-spot, 0.0);

   case digital:
     if (spot>Strike) 
       return 1;
     else
      return 0; 

   default:
     throw("Unknown option type found.");
  }
}