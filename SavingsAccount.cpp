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

bool SavingsAccount::withdraw(double input) {
  if (getBalance() < input){
    return false;
  }

  setBalance(getBalance() - input);
  return true;
}

void SavingsAccount::deposit(double input) {
  if (input < 0) {
    cout << "Invalid deposit amount (Cannot be negative)\n";
    exit(1);
  }
  setBalance(getBalance() + input);
}

void SavingsAccount::setInterestRate(double input) {
  interestRate = input;
}

double SavingsAccount::getInterestRate() {
  return interestRate;
}
