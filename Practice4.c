// Question: Write a program to calculate simple interest for a set of values representing principal, no. of years, and rate of interest.

#include <stdio.h>
int main()
{
    int p = 20, r = 2, y = 4;
    float SimpleInterest = p * r * y / 100.00;
    printf("The simple interest is: %0.2f", SimpleInterest);
    return 0;
}