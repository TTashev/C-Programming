#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please enter a number: ");
    int num;
    scanf("%d",&num);
    int UpperClosestFib, temp1, temp2, LowerClosestFib;
    UpperClosestFib = temp2 = 1;
    temp1 = 1;
    int FibbCounter = 1;
    while(UpperClosestFib < num)
    {
        UpperClosestFib = temp1 + temp2;
        if(UpperClosestFib < num)
        {
            LowerClosestFib = UpperClosestFib;
        }
        temp2 = UpperClosestFib;
        temp1 = UpperClosestFib - temp1;
        FibbCounter++;
    }
    if(abs(num - UpperClosestFib) < abs(num - LowerClosestFib))
    {
        printf("%d,%d\n",UpperClosestFib,++FibbCounter);
    }
    else
    {
        printf("%d,%d\n",LowerClosestFib,FibbCounter);
    }
    return 0;
}
