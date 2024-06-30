#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


#include<iostream>
using namespace std;
#include <string>

class BankAccount{
	public:
	// Setting the values to null using the default constructor
	BankAccount();
	// Overload constructor
	BankAccount(string, string, int, double);

	// Accessor functions
	string getFirstName() const;
	string getLastName() const;
	int getAccountNumber() const;
	double getBalance() const;
	
	// Mutator functions
	void setFirstName(string);
	void setLastName(string);
	void setAccountNumber(int);
	//void setBalance(double);
	
	// Class methods
	double getBalance();
	void deposit(double amount);
	void withdraw(double withdrawAmount);
	
	
	private:
	string newFirstName;
	string newLastName;
	int newAccountNumber;
	double newBalance;
};

#endif

