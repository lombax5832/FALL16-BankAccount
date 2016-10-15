#include "BankAccount.h"
class SavingsAccount : public BankAccount {
public:
  SavingsAccount(
    double initialBalance = 0,
    int initialAccountNumber = 0,
    double initialInterestRate = 0);

  void postInterest();

  void setInterestRate(double input);

  double getInterestRate() const;

  void printInfo() const;
private:
  double interestRate;
};