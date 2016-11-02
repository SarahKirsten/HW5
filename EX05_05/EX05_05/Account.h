#pragma once

/////////////////////////
//Program Name: EX05_05
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/1/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stack>


#include "Header.h"
using namespace std;


class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	double monthlyInterestRate;
	string name;

public:
	Account(int, double, double);
	Account();
	string getName();
	void setName(string);
	int getID();
	void setID(int);
	double getBalance();
	void setBalance(double);
	double getAnnualInterestRate();
	void setAnnualInterestRate(double);
	double getMonthlyInterestRate();
	void withdraw(int);
	void deposit(int);

	vector<Transaction> transactions;
};



