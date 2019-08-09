#include <stdio.h>
/*
    Author: Yidao Chen
    Data: 08/08/2019
 */

int main()
{
    int x = 3;
    double y = 4.2;
    double z = 8;

    double sumXY = x+y; 
    //try to replace it with +,-,*,/,%
    printf("The sum of x and y is %lf\n",sumXY);

    
    //try to use z++, z--, ++z, --z
    printf("The z value is: %lf\n",z);
    z=z+1; //same as z+=1;
    printf("The z value is: %lf\n",z);
    printf("The z value is: %lf\n",z++);
    printf("The z value is: %lf\n",z);
    printf("The z value is: %lf\n",++z);
    printf("The z value is: %lf\n",z);

    //try to use >,<,>=,<=,==,!=
    printf("Does x equal to y? %d\n",x==y);

    //try to use &&,||,!
    printf("%d\n", x>2 || y>10);
    
    return 0;
}