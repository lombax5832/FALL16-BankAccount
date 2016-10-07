#include<cmath>
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

int BankAccount::getAccountNumber() const {
  return accountNumber;
}

double BankAccount::getBalance() const {
  return balance;
}

void BankAccount::printInfo() const {
}

void BankAccount::setBalance(int newBalance) {
  balance = newBalance;
}
