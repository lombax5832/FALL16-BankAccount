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
  cout << "--Bank Account--" << endl;
  cout << "Account #: " << getAccountNumber() << " Balance: " << getBalance() << endl;
}