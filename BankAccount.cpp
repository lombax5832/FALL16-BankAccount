#include<cmath>
#include<iostream>
#include "BankAccount.h"

BankAccount::BankAccount(double initialBalance, int initialAccountNumber) {
  setBalance(initialBalance);
  setAccountNumber(initialAccountNumber);
}

bool BankAccount::withdraw(double input) {
  if (input < 0) {
    cout << "Invalid amount (Cannot be negative)\n";
    exit(1);
  }

  if (getBalance() < input) {
    return false;
  }

  setBalance(getBalance() - input);
  return true;
}

void BankAccount::deposit(double input) {
  if (input < 0) {
    cout << "Invalid amount (Cannot be negative)\n";
    exit(1);
  }

  setBalance(getBalance() + input);
}

void BankAccount::setAccountNumber(int newAccountNumber) {
  accountNumber = abs(newAccountNumber);
}

void BankAccount::setBalance(double newBalance) {
  if (newBalance < 0) {
    cout << "Invalid amount (Cannot be negative)\n";
    exit(1);
  }

  balance = newBalance;
}

int BankAccount::getAccountNumber() const {
  return accountNumber;
}

double BankAccount::getBalance() const {
  return balance;
}

void BankAccount::printInfo() const {
  cout << "--Bank Account--" << endl;
  cout << "Account #: " << getAccountNumber() << " Balance: $" << getBalance() << endl << endl;
}