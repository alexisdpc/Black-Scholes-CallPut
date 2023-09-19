#include "PayOff1.h"
#include <algorithm>
using namespace std;

class PayOff
{
  public:
    enum OptionType {call, put, digital};
    PayOff(double Strike_, OptionType TheOptionsType_);
    double operator()(double Spot) const;

  private:
    double Strike;
    OptionType TheOptionsType;
};


PayOff::PayOff(double Strike_, OptionType TheOptionsType_):
  Strike(Strike_), TheOptionsType(TheOptionsType_) {}

double PayOff::operator()(double spot) const {
  switch(TheOptionsType)
    {
      case call:
        return max(spot-Strike, 0.0);

      case put:
        return max(Strike-spot, 0.0);

      default:
        throw("Error 404");  

    }
  }