#include"BankAccount.h"
class CheckingAccount : public BankAccount {
public:
  // Includes Default Constructor
  CheckingAccount(
    double initialBalance = 0,
    int initialAccountNumber = 0,
    double initialInterestRate = 0,
    double initialMinimumBalance = 0,
    double initialServiceFee = 0);

  /*
   Description:  Calculates and stores new account balance
                   based on interest
   Pre:	Properly initialized object
   Post:	Account balance will be changed based on interest
  */
  void postInterest();

  /*
   Description:  Attempt to withdraw given amount of funds
   Pre:	Initialized, positive double
   Post:	Funds withdrawn will be subtracted from the current balance
           only if there is enough balance to withdraw
          Will return true if operation was successful
          Program will exit if negative is inserted.
   Parameters:
         value: amount of funds to withdraw
   Returns:  true if balance was greater than or equal to
               amount withdrawn, false otherwise
  */
  bool writeCheck(double value);

  /*
   Description: Sets the current interest rate to given value
   Pre:	Properly initialized object
   Post:  value of interestRate variable will be changed to
            the given
   Parameters:
         input: New interest rate, for 12%, enter 0.12
  */
  void setInterestRate(double input);

  /*
   Description: Sets the current minimum balance to given value
   Pre:	Properly initialized object
   Post:  value of minimumBalance variable will be changed to
            the given
   Parameters:
         input: New value of minimumBalance variable
  */
  void setMinimumBalance(double input);

  /*
   Description: Sets the current service fee to given value
   Pre:	Properly initialized object
   Post:  value of serviceFee variable will be changed to
            the given
   Parameters:
         input: New value of serviceFee variable
  */
  void setServiceFee(double input);

  /*
   Description: Returns the current interest rate
   Pre:	Properly initialized object
   Post:  Interest rate will be returned
   Returns:  current value of interestRate variable
  */
  double getInterestRate() const;

  /*
   Description: Returns the current minimum balance
   Pre:	Properly initialized object
   Post:  Minimum balance will be returned
   Returns:  current value of minimumBalance variable
  */
  double getMinimumBalance() const;

  /*
   Description: Returns the current service fee for being under the
                  minimum balance
   Pre:	Properly initialized object
   Post:  Service fee will be returned
   Returns:  current value of serviceFee variable
  */
  double getServiceFee() const;

  /*
   Description: Returns whether or not the current balance is above
                  or equal to the minimum requirement
   Pre:	Properly initialized object
   Post:  If account's balance is above or equal to the minimum,
            will return true
   Returns:  boolean value true if balance is above or equal to the minimum
  */
  bool isBalanceValid() const;

  /*
   Description: Prints information about the object
   Pre:	Properly initialized object
   Post:	Will print the account number, balance, interest rate,
            minimum balance, and service fee of the account
  */
  void printInfo() const;
private:
  double interestRate;
  double minimumBalance;
  double serviceFee;
};