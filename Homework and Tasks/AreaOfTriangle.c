#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double a, b, c, AreaOfTriangle, SemiPerimeter;
    printf("%Please enter the 3 sides of the triangle: ");
    scanf("%lf, %lf, %lf", &a, &b, &c);

    SemiPerimeter = (a + b + c) / 2;
    AreaOfTriangle = sqrt(SemiPerimeter * ((SemiPerimeter - a) * (SemiPerimeter - b) * (SemiPerimeter - c)));

    printf("%.3lf",AreaOfTriangle);
    return 0;
}
