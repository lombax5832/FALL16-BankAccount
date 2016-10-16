#include"BankAccount.h"
class CheckingAccount : public BankAccount {
public:
  CheckingAccount(
    double initialBalance = 0,
    int initialAccountNumber = 0,
    double initialInterestRate = 0,
    double initialMinimumBalance = 0,
    double initialServiceFee = 0);

  void postInterest();

  bool writeCheck(double value);

  void setInterestRate(double input);

  void setMinimumBalance(double input);

  void setServiceFee(double input);

  double getInterestRate() const;

  double getMinimumBalance() const;

  double getServiceFee() const;

  bool isBalanceValid() const;

  void printInfo() const;
private:
  double interestRate;
  double minimumBalance;
  double serviceFee;
};