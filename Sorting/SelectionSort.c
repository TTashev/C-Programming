#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int main()
{
    // 8 1 10 3 43 11 7 5
    int i, j, k, counter, temp, SmallestElement, CurrPos, count;
    i = counter = temp = k = 0;
    int arr[50] = {};
    SmallestElement = INT_MAX;
    // reading input
    scanf("%d",&count);
    for(i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
        counter++;
    }
    // SelectionSort
    for(j = 0; j < counter; j++)
    {
        temp = arr[j];
        for(k = j + 1; k < counter; k++)
        {
            if(arr[k] < SmallestElement)
            {
                SmallestElement = arr[k];
                CurrPos = k;
            }
        }
        if(SmallestElement < arr[j])
        {
            arr[j] = SmallestElement;
            arr[CurrPos] = temp;
        }
        SmallestElement = INT_MAX;
    }
    // Output
    for(i = 0; i < counter; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
