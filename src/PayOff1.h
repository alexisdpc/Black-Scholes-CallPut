//
// Class to encapsulate the notion of the pay-off of a vanilla option.
//

#ifndef PAYOFF_H
#define PAYOFF_H

class PayOff
{
public:
  enum OptionType {call, put, digital}; // Use enumeration to distinguish between differet payoffs
  PayOff(double Strike_, OptionType TheOptionsType_); // Constructor
  double operator()(double Spot) const; // Overrides operator ()

// User cannot access the strike
private:
  double Strike;
  OptionType TheOptionsType;

};

#endif