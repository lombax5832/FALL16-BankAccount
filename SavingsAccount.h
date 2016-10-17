#include "BankAccount.h"
class SavingsAccount : public BankAccount {
public:
  // Includes Default Constructor
  SavingsAccount(
    double initialBalance = 0,
    int initialAccountNumber = 0,
    double initialInterestRate = 0);

  /*
   Description:  Calculates and stores new account balance
                   based on interest
   Pre:	Properly initialized object
   Post:	Account balance will be changed based on interest
 */
  void postInterest();

  /*
   Description: Sets the account's interest rate
   Pre:	Properly initialized object
   Post:	Account's interest rate will be changed to given value
   Parameters:
         input: New interest rate, for 12%, enter 0.12
   Returns:  true if balance was greater than or equal to
               amount withdrawn, false otherwise
 */
  void setInterestRate(double input);

  /*
   Description: Returns the current interest rate for this account
   Pre:	Properly initialized object
   Post:	Account's interest rate will be returned as a double
   Returns:  value of the current interest rate
 */
  double getInterestRate() const;

  /*
   Description: Prints information about the object
   Pre:	Properly initialized object
   Post:	Will print the account number, balance and interest rate
            of the account
 */
  void printInfo() const;
private:
  double interestRate;
};