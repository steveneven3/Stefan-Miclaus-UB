#pragma once

using namespace System;
ref class BankAccount
{
public:
	BankAccount(String^ holder);
	void Credit(double amount);
	void Debit(double amount);
	double GetBalanace();
private:
	String^ accountHolder;
	double balance;
};