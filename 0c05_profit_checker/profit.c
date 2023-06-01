/* Program: Profit checker
/ By: Desigveloper
/  This programs takes value from user and calculate profit base on Revenue ans Expense
*/

#include <stdio.h>

float calcTotalProfit(float, float);
float calcRevenue(float, int);
float calcTotalCommission(float, float, float, int);
float calcExpenses(float fCost, int iQuantity);

int main(void)
{
    int iQuantity = 0;
    float fPrice = 0.0;
    float fCommissionRate = 0.0;
    float fRevenue = 0.0;
    float fExpenses = 0.0;
    float fProfit = 0.0;
    float fCommission = 0.0;
    float fCost = 0.0;

    printf("Enter unit price of item: ");
    scanf("%f", &fPrice);

    printf("Enter the cost of item: ");
    scanf("%f", &fCost);

    printf("Enter quantity: ");
    scanf("%d", &iQuantity);

    printf("Enter commission rate: ");
    scanf("%f", &fCommissionRate);

    fExpenses = calcExpenses(fCost, iQuantity);
    fRevenue = calcRevenue(fPrice, iQuantity);

    fProfit = calcTotalProfit(fRevenue, fExpenses);
    printf("Your net profit is Ghc%.2f\n", fProfit);

    fCommission = calcTotalCommission(fCommissionRate, fPrice, fCost, iQuantity);
    printf("Your total commission is GHc%.2f\n", fCommission);
    printf("Profit less commission is GHc%.2f\n", fProfit - fCommission);
    return 0;
}

float calcTotalProfit(float fRevenue, float fExpense)
{
    #define fTaxRateOnRev 0.095
    float fGrossProfit;
    fGrossProfit = 0;

    fGrossProfit = fRevenue - fExpense;

    return fGrossProfit - (fGrossProfit * fTaxRateOnRev);
}

float calcRevenue(float fUnitPrice, int iQuantity)
{
    return fUnitPrice * iQuantity;
}

float calcTotalCommission(float fRate, float fUnitPrice, float fCost, int iQuantity)
{
    float fCommission = 0;
    fCommission = fRate * (fUnitPrice - fCost);
    
    return fCommission * iQuantity;
}

float calcExpenses(float fCost, int iQuantity)
{
    float fGrossExpenses;
    #define fTaxRateOnExp 0.135

    fGrossExpenses = fCost * iQuantity;

    return fGrossExpenses + (fGrossExpenses * fTaxRateOnExp);
}