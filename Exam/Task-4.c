#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    int sizeOfString,i, j, k, counter;
    scanf("%d",&sizeOfString);
    sizeOfString++;
    char * string = (char *) malloc(sizeOfString * sizeof(char));
    char * InvertedString = (char *) malloc(sizeOfString * sizeof(char));
    for(i = 0; i < sizeOfString; i++)
    {
        scanf("%c", string + i);
    }
    counter = sizeOfString - 1;
    int InvertedStringCounter = 0;
    for(j = counter; j >= 0; j--)
    {
        char current = string[j];
        if(isalpha(current) && current != '@')
        {
            if(toupper(current))
            {
                InvertedString[InvertedStringCounter] = tolower(current);
            }
            else
            {
                InvertedString[InvertedStringCounter] = current;
            }
            InvertedStringCounter++;
        }

    }
    for(k = 0; k < InvertedStringCounter; k++)
    {
       if(isalpha(InvertedString[k]))
       {
          printf("%c",InvertedString[k]);
       }
    }
    free(string);
    free(InvertedString);
    return 0;
}
