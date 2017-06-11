//Напишете програма, която да служи като калкулатор със 6 функции - събиране,
//изваждане, умножение, деление, повдигане на степен и корен квадратен.
//При стартиране на програмата потребителя въвежда символ, с който указва каква функция
//се ползва (символите са +, -, *, /, ^, R) натиска enter и след това се въвеждат 2 числа
//разделени със ‘ ‘ (space) за всички функции с изключение на корен квадратен, при
//който се подава 1 число. Изхода на програмата е число, закръглено до втория знак след
//десетичната запетая. Числата на вход са в рамките от -100.0 до +100.0 и е възможно да
//не са цели числа. Забранено е използването на функцията pow() за повдигане на
//степен. Да се използва switch-case при решаване на задачата. 


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition(double first, double second);
void subtraction(double first, double second);
void multipication(double first, double second);
void division(double first, double second);
void power(double first, double second);
void SquareRoot(double first, double second);

int main()
{
    double FirstNum, SecondNum;
    char symbol;
    scanf("%c",&symbol);
    scanf("%lf %lf",&FirstNum,&SecondNum);
    switch(symbol)
    {
       case '+':
           addition(FirstNum, SecondNum);
           break;
       case '-':
           subtraction(FirstNum, SecondNum);
           break;
       case '*':
           multipication(FirstNum, SecondNum);
           break;
       case '/':
           division(FirstNum, SecondNum);
           break;
       case '^':
           power(FirstNum, SecondNum);
           break;
       case 'R':
           SquareRoot(FirstNum, SecondNum);
           break;
    }
    return 0;
}

void addition(double first, double second)
{
    double result = first + second;
    printf("%.2lf",result);
}
void subtraction(double first, double second)
{
    double result = first - second;
    printf("%.2lf",result);
}
void multipication(double first, double second)
{
    double result = first * second;
    printf("%.2lf",result);
}
void division(double first, double second)
{
    double result = first / second;
    printf("%.2lf",result);
}

void power(double first, double second)
{
    double result = 1;
    if(second == 1)
    {
       printf("%.2lf",first);
       return;
    }
    while(second != 0)
    {
        result *= first;
        second--;
    }
    printf("%.2lf",result);
}
void SquareRoot(double first, double second)
{
    double result = sqrt(first);
    printf("%.2lf",result);
}

