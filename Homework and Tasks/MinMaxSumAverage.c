#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    double min, max, sum, average, counter, i,current;
    scanf("%d",&n);
    min = INT_MAX;
    max = INT_MIN;
    sum = average = counter = i = 0;
    for(i = 0; i < n; i++)
    {
       scanf("%lf",&current);
       if(current < min)
       {
           min = current;
       }
       if(current > max)
       {
           max = current;
       }
       sum += current;
       counter++;
    }

    printf("min = %.2lf\n",min);
    printf("max = %.2lf\n",max);
    printf("sum = %.2lf\n",sum);
    printf("avg = %.2lf\n", average = sum / counter);
    return 0;
}
