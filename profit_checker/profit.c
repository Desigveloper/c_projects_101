/* Program: Profit checker
/ By: Desigveloper
/  This programs takes value from user and calculate profit base on Revenue ans Expense
*/

#include <stdio.h>

float printProfit(float, float);

int main(void)
{
    float fRevenue, fExpenses, fProfit;
    fRevenue = 0.0;
    fExpenses = 0.0;
    fProfit = 0.0;

    printf("Enter you total revenue: ");
    scanf("%f", &fRevenue);

    printf("Enter the total expenses: ");
    scanf("%f", &fExpenses);

    fProfit = printProfit(fRevenue, fExpenses);
    printf("Your net profit is Ghc%.2f\n", fProfit);

    return 0;
}

float printProfit(float fRevenue, float fExpense)
{
    #define fTaxRate 0.095
    float fGrossProfit, fNetProfit;
    fGrossProfit = 0;
    fNetProfit = 0;

    fGrossProfit = fRevenue - fExpense;

    fNetProfit = fGrossProfit - (fGrossProfit * fTaxRate);
    return fNetProfit;
}