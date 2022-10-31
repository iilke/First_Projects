//Write a C program that asks the user to enter an integer, calculates the value of
//y=f(x) for that integer and prints the result on the screen.

//Ilke D. 28.10.2022
#include <stdio.h>
int main()
{
    int x, x1, x2, x3;
    printf("please enter an integer value:\n");
    scanf("%d",&x);
    x1=-1*x;
    x2=x*x;
    x3=x2-50;
    if (x<0)
        printf("f(x)=%d",x1);
    else if(x<=100)
        printf("f(x)=%d",x2);
    else 
        printf("f(x)=%d",x3);
    return 0;
}

