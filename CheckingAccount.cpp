#include "CheckingAccount.h"
#include<algorithm>

CheckingAccount::CheckingAccount(double initialBalance, int
  initialAccountNumber, double initialInterestRate,
  double initialMinimumBalance, double initialServiceFee) {

}

bool CheckingAccount::isBalanceValid() {
  return (getBalance() >= getMinimumBalance());
}

void CheckingAccount::postInterest() {
  setBalance(getBalance() - getBalance()*getInterest());
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
