// BankingApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iomanip>
#include <iostream>
#include "BankingApp.h"

using namespace std;

//

SavingsBalance::SavingsBalance(double investmentAmount, double monthlyDepositAmount,

	double rateOfChange, int years) {

	this-> initialDeposit = investmentAmount;

	this-> monthlyDeposit = monthlyDepositAmount;

	this-> interestRate = rateOfChange;

	this-> numberOfYears = years;

}

//Destructor

SavingsBalance::~SavingsBalance() {

}

//display balance without deposit

void SavingsBalance::ZeroMonthlyDeposits() {

	//display

	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;

	cout << "=========================================================================" << endl;

	//display table labels

	cout << setw(10) << "Year" << setw(25) << "Year End Balance" << setw(40) << "Year End Earned Interest Rate" << endl;

	cout << "-------------------------------------------------------------------------" << endl;

	//variables for end balance and current year
	double yearEndingBalance = this->initialDeposit;
	int currentYear = 1;

	//iterate for the years
	while (currentYear <= this->numberOfYears) {

		//calculate interest
		double earnedInterest = yearEndingBalance * this-> interestRate / 100;

		//add the interest to end Balance
		yearEndingBalance += earnedInterest;

		//display results
		cout << right << setw(6) << currentYear << fixed << setprecision(2) << setw(18) << yearEndingBalance << setw(35) << earnedInterest << endl;

		//add a year
		currentYear++;

	}

}

//display balance with monthly deposits

void SavingsBalance::MonthlyDeposits() {

	//display
	cout << " Balance and Interest without additional Monthly Deposits" << endl;

	cout << "=========================================================================" << endl;

	//display table labels
	cout << setw(10) << "Year" << setw(25) << "Year End Balance" << setw(40) << "Year End Earned Interest Rate" << endl;

	cout << "-------------------------------------------------------------------------" << endl;

	//variables for end balance and current year
	double endingYearlyBalance = this->initialDeposit;
	int currentyear = 1;

	//iterate for the years
	while (currentyear <= this->numberOfYears) {

		int month = 1;

		double interestearned = 0.0;

		double endingMonthlyBalance = endingYearlyBalance;

		//calculate deposit over year
		while (month <= 12) {

			//add monthly deposit
			endingMonthlyBalance += this-> monthlyDeposit;

			//calculate interest by annual rate
			double monthlyinterest = endingMonthlyBalance * this->interestRate / (100.0 * 12.0);

			//add the interest to earned
			interestearned += monthlyinterest;

			//add the interest to end of monthe
			endingMonthlyBalance += monthlyinterest;

			//add month
			month++;

		}

		//set value of yearly to monthly balance
		endingYearlyBalance = endingMonthlyBalance;

		//display results
		cout << right << setw(6) << currentyear << fixed << setprecision(2) << setw(18) << endingYearlyBalance << setw(35) << interestearned << endl;

		//add year
		currentyear++;

	}

}