#include <stdio.h>
#include <stdlib.h>

void EvaluteNumber(int number)

int main()
{
    int num, i;
    for(i = 1; i <= 10; i++)
    {
        scanf("%d",&num);
        EvaluteNumber(num);
    }
    return 0;
}

void EvaluteNumber(int number)
{
    int IsEvenOrOdd = number % 2 == 0 ? 1 : 0;
    int MultipleOfThree = number % 3 == 0 ? 1 : 0;
    int MultipleOfFive = number % 5 == 0 ? 1 : 0;
    int MultipleOfNineteen = number % 19 == 0 ? 1 : 0;
    double DivisionOfTen, DivisionOfSeventeen;
    if(IsEvenOrOdd == 1)
    {
        printf("even,");
    }
    else
    {
        printf("odd,");
    }
    if(MultipleOfThree == 1)
    {
        printf("yes,");
    }
    else
    {
        printf("no,");
    }
    if(MultipleOfFive == 1)
    {
        printf("yes,");
    }
    else
    {
        printf("no,");
    }
    if(MultipleOfNineteen == 1)
    {
        printf("yes,");
    }
    else
    {
        printf("no,");
    }
    DivisionOfTen = (double)number / 10;
    DivisionOfSeventeen = (double)number / 17;
    printf("%.4f,%.4f\n",DivisionOfTen,DivisionOfSeventeen);
}
