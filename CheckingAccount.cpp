#include "CheckingAccount.h"
#include<algorithm>
#include<iostream>

CheckingAccount::CheckingAccount(
  double initialBalance,
  int initialAccountNumber,
  double initialInterestRate,
  double initialMinimumBalance,
  double initialServiceFee) {

  setBalance(initialBalance);
  setAccountNumber(initialAccountNumber);
  setInterestRate(initialInterestRate);
  setMinimumBalance(initialMinimumBalance);
  setServiceFee(initialServiceFee);
}

void CheckingAccount::postInterest() {
  setBalance(getBalance()*(1.0 + getInterestRate()));
}

bool CheckingAccount::writeCheck(double value, int toAccNum) {
  return false;
}

void CheckingAccount::setInterestRate(double input) {
  interestRate = input;
}

void CheckingAccount::setMinimumBalance(double input) {
  minimumBalance = max(input, 0.0);
}

void CheckingAccount::setServiceFee(double input) {
  serviceFee = max(input, 0.0);
}

double CheckingAccount::getInterestRate() {
  return interestRate;
}

double CheckingAccount::getMinimumBalance() {
  return minimumBalance;
}

double CheckingAccount::getServiceFee() {
  return serviceFee;
}

bool CheckingAccount::isBalanceValid() {
  return (getBalance() >= getMinimumBalance());
}

void CheckingAccount::printInfo() const {
  cout << "--Checking Account--" << endl;
  cout << "Account #: " << getAccountNumber() << " Balance: " << getBalance() << endl;
}
