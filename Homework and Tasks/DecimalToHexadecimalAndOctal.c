#include <stdio.h>
#include <stdlib.h>

char array[5] = {};
int convertDecimalToOctal(int decimalNumber);
void convertDecimalToHexadecimal(int decimalNumber);
int main()
{
    int DecimalNumber;
    printf("Please enter a decimal number: ");
    scanf("%d",&DecimalNumber);
    int oct = convertDecimalToOctal(DecimalNumber);
    convertDecimalToHexadecimal(DecimalNumber);
    printf("OCT:0o%d",oct);
    return 0;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

void convertDecimalToHexadecimal(int decimalNumber)
{
    int counter, i;
    counter = i = 0;
    while(1)
    {
       if(decimalNumber < 16)
       {
           array[counter] = decimalNumber;
           break;
       }
       else if(decimalNumber > 256)
       {
          array[counter] =  decimalNumber / 256;
          decimalNumber = decimalNumber - ( 256 * (decimalNumber / 256));
          counter++;
       }
       else if(decimalNumber < 256)
       {
          array[counter] =  decimalNumber / 16;
          decimalNumber = decimalNumber - ( 16 * (decimalNumber / 16));
          counter++;
       }
    }
    printf("HEX:0x");
    for(i = 0; i <= counter; i++)
    {
        switch(array[i])
        {
            case 0:
               printf("%d",array[i]);
               break;
            case 1:
               printf("%d",array[i]);
               break;
            case 2:
               printf("%d",array[i]);
               break;
            case 3:
               printf("%d",array[i]);
               break;
            case 4:
               printf("%d",array[i]);
               break;
            case 5:
               printf("%d",array[i]);
               break;
            case 6:
               printf("%d",array[i]);
               break;
            case 7:
               printf("%d",array[i]);
               break;
            case 8:
               printf("%d",array[i]);
               break;
            case 9:
               printf("%d",array[i]);
               break;
            case 10:
               printf("%c",'A');
               break;
            case 11:
               printf("%c",'B');
               break;
            case 12:
               printf("%c",'C');
               break;
            case 13:
               printf("%c",'D');
               break;
            case 14:
               printf("%c",'E');
               break;
            case 15:
               printf("%c",'F');
               break;
        }
    }
    printf("\n");
}


