#include <stdio.h>
#include <stdlib.h>

int arr[100];
int main()
{
    int n, i, num, DoesItExist, j;
    DoesItExist = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    for(j = 0; j < n; j++)
    {
        if(arr[j] == num)
        {
            DoesItExist = 1;
            break;
        }
    }
    if(DoesItExist == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
