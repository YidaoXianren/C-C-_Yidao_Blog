#include <stdio.h>
/*
    Author: Yidao Chen
    Data: 08/08/2019
 */

#define PI 3.14
int main()
{
    int x = 3;
    double y;

    y = 2 * PI * x;
    printf("The Perimeter of the circle with radius of %d is %lf",x,y);
    return 0;
}