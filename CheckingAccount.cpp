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

bool CheckingAccount::writeCheck(double value) {
  return withdraw(value);
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

double CheckingAccount::getInterestRate() const {
  return interestRate;
}

double CheckingAccount::getMinimumBalance() const {
  return minimumBalance;
}

double CheckingAccount::getServiceFee() const {
  return serviceFee;
}

bool CheckingAccount::isBalanceValid() const {
  return (getBalance() >= getMinimumBalance());
}

void CheckingAccount::printInfo() const {
  cout << "--Checking Account--" << endl;
  cout << "Account #: " << getAccountNumber() << " Balance: $" 
    << getBalance() << endl;
  cout << "Interest Rate: " << getInterestRate()*100.0 << "%" 
    << endl;
  cout << "Minimum Balance: $" << getMinimumBalance() 
    << " Service Fee: $" << getServiceFee() << endl << endl;
}
