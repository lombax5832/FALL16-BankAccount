#pragma once
class BankAccount {
public:
  BankAccount(double initialBalance = 0, int initialAccountNumber = 0);

  double withdrawFunds(double toWithdraw);
  void depositFunds(double toDeposit);

  void setAccountNumber(int);

  int getAccountNumber() const;
  double getBalance() const;
  
  void printInfo() const;
private:
  int accountNumber;
  double balance;
};