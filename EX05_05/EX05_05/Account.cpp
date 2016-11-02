#include "Account.h"

Account::Account(int id0, double balance0, double annualInterestRate0)
{
	id = id0;
	balance = balance0;
	annualInterestRate = annualInterestRate0;
}

Account::Account()
{
	id = 1234;
	balance = 1234;
	annualInterestRate = 1;
}

void Account::setName(string name)
{
	this->name = name;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
	this->annualInterestRate = annualInterestRate;
}

void Account::setID(int id)
{
	this->id = id;
}

string Account::getName()
{
	return name;
}

double Account::getBalance()
{
	return balance;
}

int Account::getID()
{
	return id;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

double Account::getMonthlyInterestRate()
{
	return (annualInterestRate / 12);
}

void Account::withdraw(int amount)
{
	balance -= amount;
	Transaction w('w', amount, balance, "withdrawal");
	transactions.push_back(w);
}

void Account::deposit(int amount)
{
	balance += amount;
	Transaction d('d', amount, balance, "deposit");
	transactions.push_back(d);
}

