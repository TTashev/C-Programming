#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char HexNum[4] = {};
    int decimal ,j, current, length;
    scanf("%s",&HexNum);
    length = 3;
    decimal = 0;
    for( j = 0; j < 4; j++)
    {
        if(HexNum[j]>='0' && HexNum[j]<='9')
        {
            current = HexNum[j] - 48;
        }
        else if(HexNum[j]>='a' && HexNum[j]<='f')
        {
            current = HexNum[j] - 97 + 10;
        }
        else if(HexNum[j]>='A' && HexNum[j]<='F')
        {
            current = HexNum[j] - 65 + 10;
        }
        decimal += current * pow(16,length);
        length--;
    }
    int FiveNumericSystem = 0;
    int counter = 1;
    while(decimal != 0)
    {
        FiveNumericSystem += (decimal % 5) * counter;
        decimal /= 5;
        counter *= 10;
    }
    printf("%d",FiveNumericSystem);

    return 0;
}
