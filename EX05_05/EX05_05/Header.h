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

using namespace std;



class Date {
public:
	int year, month, day;
	Date() {
		year = 2000;
		month = 1;
		day = 1;
	}
	Date(int a) { //seconds past Jan 1, 1970
		int x, y, z;
		x = a / (365 * 24 * 60 * 60);
		year = x + 1970;
		y = a % (365 * 24 * 60 * 60);
		month = y / (30 * 24 * 60 * 60);
		z = y % (30 * 24 * 60 * 60);
		day = z / (24 * 60 * 60);
	}
	Date(int mm, int dd, int yyyy) {
		month = mm;
		day = dd;
		year = yyyy;
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}
	void setDate(int elapsedTime) {
		int x, y, z;
		x = elapsedTime / (365 * 24 * 60 * 60);
		year = x + year;
		y = elapsedTime % (365 * 24 * 60 * 60);
		month = y / (30 * 24 * 60 * 60);
		if (month>12) {
			month -= 12;
			year++;
		}
		z = y % (30 * 24 * 60 * 60);
		day = z / (24 * 60 * 60);
	}
};

class Transaction {
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	double getAmount() {
		return amount;
	}
	char getType() {
		return type;
	}
	double getBalance() {
		return balance;
	}
	string getDescription() {
		return description;
	}
	Transaction(char type2, double amount2, double balance2, string description2) {
		type = type2;
		amount = amount2;
		balance = balance2;
		description = description2;
	}
};