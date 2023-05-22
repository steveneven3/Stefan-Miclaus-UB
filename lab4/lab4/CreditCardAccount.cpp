#include "stdafx.h"
#include "CreditCardAccount.h"
#using <mscorlib.dll>
using namespace System;

bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else 
	{ 
		currentBalance += amount;
		return true;
	}
}

void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;
}
void CreditCardAccount::PrintStatement()
{ 
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{ 
	return accountNumber; 
}