//
// Class to encapsulate the notion of the pay-off of a vanilla option.
//

#ifndef PAYOFF_H
#define PAYOFF_H

class PayOff
{
public:
  enum OptionType {call, put};
  PayOff(double Strike_, OptionType TheOptionsType_);
  double operator()(double Spot) const;

// User cannot access the strike
private:
  double Strike;
  OptionType TheOptionsType;

};

#endif