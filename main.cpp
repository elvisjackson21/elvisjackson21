#include <iostream>
#include "BankingApp.h"

using namespace std;

int main()

{
	//set color
	system("Color 0A");

	while (1)

	{

		//display
		cout << "*************************************" << endl;

		cout << "*************Data Input**************" << endl;

		cout << "Initial Investment Amount: " << endl;

		cout << "Monthly Deposit: " << endl;

		cout << "Annual Interest: " << endl;

		cout << "Number of years: " << endl;

		cout << endl;

		//prompt for input
		cout << "*************************************" << endl;

		cout << "*************Data Input**************" << endl;

		cout << "Initial Investment Amount: $";

		
		//variable for input
		double startingDeposit, monthlyDeposit, interestRate;

		int years;

		//input and promts
		cin >> startingDeposit;

		cout << "Monthly Deposit: $";

		cin >> monthlyDeposit;

		cout << "Annual Interest: %";

		cin >> interestRate;

		cout << "Number of years: ";

		cin >> years;

		//create SavingBlanace and palce parameters
		SavingsBalance clientsSavings = SavingsBalance(startingDeposit, monthlyDeposit, interestRate, years);

		cout << endl;

		//run without deposits
		clientsSavings.ZeroMonthlyDeposits();

		cout << endl;

		//if monthly deposit is greater than 0 run with deposits
		if (monthlyDeposit > 0) {

			clientsSavings.MonthlyDeposits();

		}

		//prompt user to run again
		cout << endl << "Would you like to run again? (y/n): ";

		string choice;

		cin >> choice;

		//if 'y' start again
		if (choice != "y") {

			break;

		}

		cout << endl;

	}

	return 0;

}