/////////////////////////
//Program Name: EX05_05
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/1/2016
///////////////////////

#include "Account.h"

double Account::annualInterestRate = 1.5;

int main()
{
	Account Savings;
	Savings.setName("George");
	Savings.setID(1122);
	Savings.setBalance(1000);
	Savings.deposit(30);
	Savings.deposit(40);
	Savings.deposit(50);
	Savings.withdraw(5);
	Savings.withdraw(4);
	Savings.withdraw(2);
	
	cout << "Account Summary: " << endl << endl
		<<"Account Holder Name: " << Savings.getName() << endl 
		<< "Annual Interest Rate: " << Savings.getAnnualInterestRate() << endl
		<< "Monthly Interest Rate: " << Savings.getMonthlyInterestRate() << endl
		<< "Balance: " << Savings.getBalance() << endl << endl;
	cout << "Transaction Summary: " << endl << endl;
	int f = Savings.transactions.size();
	for (int i = 0;i < f;i++)
	{
		cout << i + 1 << ")" << endl << Savings.transactions[i].getDescription() << " $"
			<< Savings.transactions[i].getAmount() << endl;
		cout << "Balance: " << Savings.transactions[i].getBalance() << endl << endl;
	}



	return 0;
}
