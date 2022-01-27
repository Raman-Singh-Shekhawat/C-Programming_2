// Question: Create a program to convert a given temperature in Degrees Celsius to Degrees Fahrenheit.

#include <stdio.h>
int main()
{
    float deg_cel, deg_fahren;
    printf("\nEnter the temperature in Degrees Celsius: ");
    scanf("%f", &deg_cel);

    deg_fahren = (deg_cel * 9 / 5) + 32;

    printf("\nThe temperature in Degrees Fahrenheit is: %.2f\n", deg_fahren);
    return 0;
}
