#include "SavingsAccount.h"
#include<algorithm>
#include<iostream>

SavingsAccount::SavingsAccount(
  double initialBalance,
  int initialAccountNumber,
  double initialInterestRate) {

  setBalance(initialBalance);
  setAccountNumber(initialAccountNumber);
  setInterestRate(initialInterestRate);
}

void SavingsAccount::postInterest() {
  setBalance(getBalance()*(1.0 + getInterestRate()));
}

void SavingsAccount::setInterestRate(double input) {
  interestRate = input;
}

double SavingsAccount::getInterestRate() const {
  return interestRate;
}

void SavingsAccount::printInfo() const {
  cout << "--Savings Account--" << endl;
  cout << "Account #: " << getAccountNumber() << " Balance: $" << getBalance() << endl;
  cout << "Interest Rate: " << getInterestRate()*100.0 << "%" << endl << endl;
}
