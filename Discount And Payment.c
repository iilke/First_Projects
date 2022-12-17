//Write a C program that asks the user to enter the amount of money they spent
//shopping. Then the program calculates the respective discount percentage and
//prints the amount they should pay on the screen

//Ilke D. 28.10.2022
#include <stdio.h>
int main()
{
    float P,P2,money,P3;
    printf("Enter the amount of money spent:");
    scanf("%f",&money);
    if(money<=100)
    {
        P = money - (money*2/100);
        printf("discount is 2 percent and the amount you must pay is %.2f.",P);
    }
    if(101<=money && money<=301)
    {
        P2 = money - (money*4/100);
        printf("discount is 4 percent and the amount you must pay is %.2f.",P2);
    }
    if(money>=301)
    {
        P3 = money - (money*10/100);
        printf("discount is 10 percent and the amount you must pay is %2.f.",P3);
    }
    return 0;
}
