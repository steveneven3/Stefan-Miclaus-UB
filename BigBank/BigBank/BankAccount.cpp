#include "stadafx.h"
#include "BankAccount.h"

BankAccount::BankAccount(String^ holder)
	: accountHolder(holder), balance(0.0)
{

}

void BankAccount::Credit(double amount)
{
	balance += amount;
}

void BankAccount::Debit(double amount)
{
	balance += amount;
}

void BankAccount::GetBalanace()
{
	return balance;
}