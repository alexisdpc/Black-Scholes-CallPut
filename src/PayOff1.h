//
// Class to encapsulate the notion of the pay-off of a vanilla option.
//

#ifndef PAYOFF_H
#define PAYOFF_H

class PayOff
{
public:
  enum OptionType {call, put, digital}; // Distinguish between differet payoffs
  PayOff(double Strike_, OptionType TheOptionsType_); //Constructor
  double operator()(double Spot) const;

// User cannot access the strike
private:
  double Strike;
  OptionType TheOptionsType;

};

#endif