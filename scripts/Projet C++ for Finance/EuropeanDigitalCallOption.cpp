#include "EuropeanDigitalCallOption.h"

EuropeanDigitalCallOption::EuropeanDigitalCallOption(double _expiry, double _strike) :EuropeanDigitalOption(_expiry,_strike) {}

double EuropeanDigitalCallOption::payoff(double z) const
{
	if (z >= getStrike())
	{
		return 1.0;
	}
	else
	{
		return 0.0;
	}

};

optionType EuropeanDigitalCallOption::GetOptionType() const
{
	return optionType::digitalcall;
}