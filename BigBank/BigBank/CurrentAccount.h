#pragma once

#include "BankAccount.h"

ref class CurrentAccount : BankAccount
{
public:
	CurrentAccount(String^ holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();
private:
	double overdraftLimit;
};