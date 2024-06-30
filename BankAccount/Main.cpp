#include "BankAccount.h"
#include <iostream>
using namespace std;

int main(){
	
	string firstName;
	string lastName;
	int accountNumber;
	double balance;
	double amount, withdrawAmount;

	cout << "Enter your first name: " << endl;
	cin >> firstName;
	
	cout << "Enter your last name: " << endl;
	cin >> lastName;
	
	cout << "Enter account number: " << endl;
	cin >> accountNumber;
	
	cout << "Enter deposit amount: " << endl;
	cin >> amount;
	
	cout << "Enter the amount to withdraw: " << endl;
	cin >> withdrawAmount;
	
	BankAccount myAccount(firstName,lastName, accountNumber, balance);
	
	cout << "Account Details: " << myAccount.getFirstName() << " " << myAccount.getLastName() << " " << myAccount.getAccountNumber() << endl;
    myAccount.deposit(amount);
    myAccount.withdraw(withdrawAmount);

	return 0;
}

