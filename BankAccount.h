#pragma once
using  namespace std;
class BankAccount {
public:
  BankAccount(double initialBalance = 0, int initialAccountNumber = 0);

  /*
   Description:  Attempt to withdraw given amount of funds
   Pre:	Initialized, positive double
   Post:	Funds withdrawn will be subtracted from the current balance
           only if there is enough balance to withdraw
          Will return true if operation was successful
          Program will exit if negative is inserted.
   Parameters:
         toWithdraw: amount of funds to withdraw
   Returns:  true if balance was greater than or equal to
               amount withdrawn, false otherwise
 */
  bool withdraw(double toWithdraw);

  /*
   Description:  Attempt to deposit given amount of funds
   Pre:	Initialized, positive double
   Post:	Funds deposited will be added to the current balance
          Program will exit if negative is inserted.
   Parameters:
         toDeposit: amount of funds to deposit
 */
  void deposit(double toDeposit);

  /*
   Description:  Sets the account number to given int
   Pre:	Initialized, positive int
   Post:	Account number will be changed to the given int
   Parameters:
         newAccountNumber: the new accountNumber
 */
  void setAccountNumber(int newAccountNumber);
  void setBalance(double newBalance);

  int getAccountNumber() const;
  double getBalance() const;

  virtual void printInfo() const;
private:
  int accountNumber;
  double balance;
};