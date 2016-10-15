#include "BankAccount.h"
class SavingsAccount : public BankAccount {
public:
  SavingsAccount(
    double initialBalance = 0,
    int initialAccountNumber = 0,
    double initialInterestRate = 0);
  
  void postInterest();

  bool withdraw(double input);

  void deposit(double input);

  void setInterestRate(double input);

  double getInterestRate();

  void printInfo() const;
private:
  double interestRate;
};