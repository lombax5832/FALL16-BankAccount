#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

#include <iomanip>
#include <iostream>

int main() {
  // Create objects to test
  BankAccount bankAccountTest(533.0, 1);
  SavingsAccount savingsAccountTest(5022.0, 2, 0.05);

  // Sets amount of decimals to print
  cout << fixed << setprecision(2);

  // Prints all initial information
  bankAccountTest.printInfo();
  savingsAccountTest.printInfo();

  // Prompt user to input initial balance for a checking account object
  cout << "Please enter an initial balance for a checking account:" << endl;
  int initialBalance = 0;
  cin >> initialBalance;
  CheckingAccount checkingAccountTest(initialBalance, 3, 0.12, 50.0, 30.0);

  // Calculates interest for object of CheckingAccount class
  checkingAccountTest.postInterest();
  cout << "Checking Account Interest Posted." << endl << endl;

  checkingAccountTest.printInfo();

  // Prompt user for input and explain loop
  cout << "Enter a number less than 0 to withdraw and greater than 0 to deposit." 
    << endl;
  cout << "Enter 0 to stop the loop and calculate interest" << endl << endl;

  int temp;
  cin >> temp;

  while (temp != 0) {
    // Use a different function to add and subtract money from account
    if (temp > 0) {
      checkingAccountTest.deposit(temp);
    } else {
      if (checkingAccountTest.withdraw(-temp)) {
        cout << "Withdrawl successful" << endl << endl;
      } else {
        cout << "Not Enough Funds" << endl << endl;
      }
    }
    checkingAccountTest.printInfo();
    cin >> temp;
  }

  // Calculate interest at end of loop
  cout << "Interest Calculated" << endl << endl;

  checkingAccountTest.postInterest();
  checkingAccountTest.printInfo();

  return 0;
}