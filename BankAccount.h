using  namespace std;
class BankAccount {
public:
  BankAccount(double initialBalance = 0, int initialAccountNumber = 0);

   /*
	  Description:  Attempt to withdraw given amount of funds
	  Pre:	Initialized, positive double
	  Post:	Funds withdrawn will be subtracted from the current balance
            and returns a boolean value based on if the withdrawl was
            successful or not
	  Parameters:		
					toWithdraw: amount of funds to withdraw
    Returns:  true if balance was greater than or equal to
                amount withdrawn, false otherwise
  */
  bool withdrawFunds(double toWithdraw);
  void depositFunds(double toDeposit);

  void setAccountNumber(int newAccountNumber);
  void setBalance(double newBalance);

  int getAccountNumber() const;
  double getBalance() const;

  virtual void printInfo() const;
private:
  int accountNumber;
  double balance;
};