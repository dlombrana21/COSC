//Daniel L - 04/23/2021 || This program takes a sale price, adds tax, takes in the amount
//paid and returns the # of coins and dollars to return the most efficient exact change.
#include <iostream>
#include <math.h>



//Will return the distribution of change in coins
void ExactChange(double dblPSalesTotal, double dblPPaidTotal) {
    const double dblDollarValue = 1.0;
    const double dblQuarterValue = .25;
    const double dblDimeValue = .1;
    const double dblNickelValue = .05;
    const double dblPennyValue = .01;

    int intDollarCount = 0;
    int intQuarterCount = 0;
    int intDimeCount = 0;
    int intNickelCount = 0;
    int intPennyCount = 0;

    //finds the exact change total
    double dblChange =  dblPPaidTotal - dblPSalesTotal;

    //std::cerr << "dblChange: " << dblChange << std::endl;

    //starting in highest increments ($1) figure out how much of each denomination is needed to give back exact change.
    intDollarCount = dblChange/dblDollarValue;
    dblChange = dblChange - (intDollarCount * dblDollarValue);
    //std::cerr << "after $1 - " << dblChange << std::endl;
    intQuarterCount = dblChange/dblQuarterValue;
    dblChange = dblChange - (intQuarterCount * dblQuarterValue);
    //std::cerr << "after $.25 - " << dblChange << std::endl;
    intDimeCount = dblChange/dblDimeValue;
    dblChange = dblChange - (intDimeCount * dblDimeValue);
    //std::cerr << "after $.10 - " << dblChange << std::endl;
    intNickelCount = dblChange/dblNickelValue;
    dblChange = dblChange - (intNickelCount * dblNickelValue);
    //std::cerr << "after $.01 - " << dblChange << std::endl;
    intPennyCount = dblChange/dblPennyValue;
    dblChange = dblChange - (intPennyCount * dblPennyValue);


    
    //std::cerr << "intDollarCount: " << intDollarCount << std::endl;
    //std::cerr << "dblChange " << dblChange << std::endl;

    std::cout << "\nCustomer Receives:" << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << "Dollars: " << intDollarCount << std::endl;
    std::cout << "Quarters: " << intQuarterCount << std::endl;
    std::cout << "Dimes: " << intDimeCount << std::endl;
    std::cout << "Nickels: " << intNickelCount << std::endl;
    std::cout << "Pennies: " << intPennyCount << std::endl;

    }//exact change



int main () {


    double dblSalesCost = 0.00;
    const double dblSalesTax = .0825;
    double dblSalesTotal = 0.00;
    double dblPay = 0.0;
    

    int intDollarCount = 0;
    int intQuarterCount = 0;
    int intDimeCount = 0;
    int intNickelCount = 0;
    int intPennyCount = 0;


    //User Input
    std::cout << "Please input your Sales Cost in the form X.XX: ";
    std::cin >> dblSalesCost;

    //Gets Total and rounds to 2 decimal places
    dblSalesTotal = dblSalesCost + (dblSalesCost*dblSalesTax);
    //std::cerr << "Testing " << ExactChange(dblSalesTotal) << std::endl;
    dblSalesTotal = std::ceil(dblSalesTotal * 100.0) / 100.0;
    //std::cerr << "Testing after round " << ExactChange(dblSalesTotal) << std::endl;

    std::cout << "Your Total is: " << dblSalesTotal << std::endl;

    std::cout << "Please input how much you paid in the form X.XX: ";
    std::cin >> dblPay;
    //



    // Sends to exact change
    ExactChange(dblSalesTotal, dblPay);

    //Output
    std::cout << "Your total is: "<< dblSalesTotal << std::endl;
    std::cout << "You Paid: " << dblPay << std::endl;
    std::cout << "Your change is: "<< dblPay - dblSalesTotal << std::endl;

    return 0;
}

