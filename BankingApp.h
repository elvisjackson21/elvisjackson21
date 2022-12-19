#pragma once
#ifndef BankingApp_H_
#define BankingApp_H_

class SavingsBalance {

public:

    //savings function with parameters
    SavingsBalance(double investment, double monthDeposit, double rate, int years);

    //check function
    virtual ~SavingsBalance();

    //calculate and display monthly no deposit
    void ZeroMonthlyDeposits();

    //calculate and display monthly with deposit
    void MonthlyDeposits();

private:

    //starting deposit
    double initialDeposit;

    //deposit added monthly
    double monthlyDeposit;

    //rate of interest
    double interestRate;

    //years
    int numberOfYears;

};

#endif