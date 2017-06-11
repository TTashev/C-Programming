#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double r, surface, volume, perimeter;
    printf("Please enter radius of the sphere: ");
    scanf("%lf", &r);
    perimeter = 2 * M_PI * r;
    surface = 4 * M_PI * (r * r);
    volume = (4.0 / 3.0) * M_PI * (r * r * r);
    printf("Perimeter: %.2lf\nSurface: %.2lf\nVolume: %.2lf\n",perimeter, surface, volume);

    return 0;
}
