#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i,j, var;
    for(i = 0; i < 100; i++)
    {
        scanf("%d",&var);
        arr[i] = var;
    }
    for(j = 0; j < 100; j++)
    {
        if(arr[j] >= 0 && arr[j] <= 100)
        {
            printf("%d ",arr[j]);
        }
    }
    return 0;
}
