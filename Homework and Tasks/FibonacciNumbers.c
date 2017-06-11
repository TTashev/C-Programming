#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NthFibonacci;
    scanf("%d", &NthFibonacci);
    int fib, temp1, temp2;
    fib = temp2 = 0;
    temp1 = 1;
    if(NthFibonacci == 0)
    {
       printf("Error: Input larger number than 0");
    }
    else if(NthFibonacci < 0)
    {
        printf("Error: Input positive number");
    }
    else
    {
       while(NthFibonacci != 0)
       {
          fib = temp1 + temp2;
          temp2 = fib;
          temp1 = fib - temp1;
          NthFibonacci--;
       }
       printf("%d",fib);
    }
    return 0;
}
