//Write a C program that asks the user for the side lengths of 2 rectangles. The
//program finds which rectangle is bigger and prints the result on the screen. If any
//negative values are entered, the program displays “Negative value entered” and
//terminates

//Ilke D. 28.10.2022
#include <stdio.h>
int main ()
{
  int a = 0, b = 0, c = 0, d = 0, area1 = 0, area2 = 0;
  printf ("please enter the side lengths of 1st rectangle\n");
  scanf ("%d%d", &a, &b);
  printf ("please enter the side lengths of 2nd rectangle\n");
  scanf ("%d%d", &c, &d);
  area1 = (a * b);
  area2 = (c * d);
  if (a<0||b<0 ||c<0 || d<0) 
    printf ("negative value entered\n");
  else if (area1 > area2)
    printf ("first rectangle is bigger than the second one\n");
  else if (area2 > area1)
    printf ("second rectangle is bigger than the first one\n");
  return 0;
}
