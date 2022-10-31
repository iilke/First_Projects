//Write a C program that asks the user to enter a temperature value t as a floating
//point number. The program should print:
//- “The weather’s cold” if t<5,
//- “The weather’s warm” if 5<t<20,
//- “The weather’s hot” if t>20

//Ilke D. 28.10.2022
#include <stdio.h>
int main()

{
    float t=0;
    printf("please enter temperature value\n");
    scanf("%f",&t);
    if (t<5)
        printf("The weather is cold");
    else if (5<t<20)
        printf("The weather is warm");
    else if (t>20)
        printf("The weather is hot");
    return 0;
}
