#include<cmath>
#include<iostream>
#include "BankAccount.h"

BankAccount::BankAccount(double initialBalance, int initialAccountNumber) {
  setBalance(initialBalance);
  setAccountNumber(initialAccountNumber);
}

bool BankAccount::withdrawFunds(double toWithdraw) {
  if (getBalance() < toWithdraw) {
    return false;
  } else {
    setBalance(getBalance() - toWithdraw);
    return true;
  }
}

void BankAccount::depositFunds(double toDeposit) {
  if (toDeposit > 0) {
    setBalance(getBalance() + toDeposit);
  }
}

void BankAccount::setAccountNumber(int newAccountNumber) {
  accountNumber = abs(newAccountNumber);
}

void BankAccount::setBalance(double newBalance) {
  balance = newBalance;
}

int BankAccount::getAccountNumber() const {
  return accountNumber;
}

double BankAccount::getBalance() const {
  return balance;
}

void BankAccount::printInfo() const {
  toOstream(cout);
}

void BankAccount::toOstream(ostream &ostrm) const {
  // Runs a loop and outputs a line to an ostream object
  ostrm << "Account #: " << getAccountNumber() << " Balance: " << getBalance() << endl;
}
