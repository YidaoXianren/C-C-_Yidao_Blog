#include <stdio.h>
/*
    Author: Yidao Chen
    Data: 08/10/2019
 */

int main()
{
    //for loop
    /* you can also write it as
    for (int i=0;i<10;i++){
        printf("Hello World!!\n");
    }
    */
    int i;
    for (i=0;i<10;i++){
        printf("Hello World!!\n");
    }

    //while loop
    int j=0;
    while(j<10){
        printf("Another Hello!!\n");
        j=j+1;
    }

    //do while loop
    int k=0;
    do{
        printf("Hello from do While!!\n");
        k=k+1;
    }while(k<10);

    //if...else if...else
    int m=3;
    if(m<3){
        printf("The value of m is less than 3.\n");
    } else if(m>3){
        printf("The value of m is larger than 3.\n");
    } else{
        printf("The value of m is equal to 3.\n");
    }

    //switch
    int n=1;
    switch(n){
        case 1:
            printf("This is case 1.\n");
        case 2:
            printf("This is case 2. \n");
            break;
        case 3:
            printf("This is case 3. \n");
            break;
        default:
            printf("This is the default case. \n");
    }

    return 0;
}

