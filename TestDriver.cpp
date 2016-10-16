#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

#include <iomanip>
#include <iostream>

int main() {
  BankAccount bankAccountTest(500.0, 00000001);

  CheckingAccount checkingAccountTest(500.0, 00000002, 0.121, 50, 30);

  SavingsAccount savingsAccountTest(500.0, 00000003, 0.05);

  cout << fixed << setprecision(2);

  bankAccountTest.printInfo();
  checkingAccountTest.printInfo();
  savingsAccountTest.printInfo();

  checkingAccountTest.postInterest();
  cout << "Checking Account Interest Posted." << endl << endl;

  checkingAccountTest.printInfo();

  cout << "Enter a number less than 0 to withdraw and greater than 0 to deposit." << endl;
  cout << "Enter 0 to stop the loop and calculate interest" << endl << endl;

  int temp;
  cin >> temp;

  while (temp != 0) {
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
  checkingAccountTest.postInterest();
  checkingAccountTest.printInfo();
  return 0;
}