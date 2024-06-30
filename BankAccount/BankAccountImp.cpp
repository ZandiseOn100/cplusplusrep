#include "BankAccount.h"
#include <iostream>
using namespace std;


BankAccount::BankAccount(){
	newAccountNumber = 0;
	newBalance = 0.0;
}

BankAccount::BankAccount(string firstName, string lastName, int accountNumber, double balance){
	
	newFirstName = firstName;
	newLastName = lastName;
	newAccountNumber = accountNumber;
	newBalance = balance;
}


string BankAccount::getFirstName() const{
	return newFirstName;
}
string BankAccount::getLastName() const{
	return newLastName;
}
int BankAccount::getAccountNumber() const{
	return newAccountNumber;
}
double BankAccount::getBalance() const{
	return newBalance;
}

void BankAccount::setFirstName(string firstName){
	newFirstName = firstName;
}
void BankAccount::setLastName(string lastName){
	newLastName = lastName;
}
void BankAccount::setAccountNumber(int accountNumber){
	newAccountNumber = accountNumber;
}
double BankAccount::getBalance(){
    return newBalance;
}
void BankAccount::deposit(double amount){
    if (amount > 0){
        newBalance += amount;
        cout << "Deposited: R" << amount << endl;
    }else{
        cout << "Invalid deposit amount! " << amount << endl;
    }
}

void BankAccount::withdraw(double withdrawAmount){
    if (withdrawAmount> 0 && withdrawAmount <= newBalance){
        newBalance -= withdrawAmount;
        cout << "Withdrawn: R" << withdrawAmount << endl;
    }else{
        cout << "Invalid withdrawal amount or insufficient amount!" << endl;
    }
}












