#include "BankAccount.h"
class SavingsAccount : public BankAccount {
public:
  SavingsAccount(
    double initialBalance = 0,
    int initialAccountNumber = 0,
    double initialInterestRate = 0);
  
  void setInterestRate(double input);

  double getInterestRate();
private:
  double interestRate;
};