/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Exercises 1>

  Solution for Bonus Exercises 1 Problem 1
*/

#include <stdio.h>

int main(){
  int a,b;
  printf("Please enter first number: ");
  scanf("%d",&a);
  printf("Please enter the second number: ");
  scanf("%d",&b);
  printf("Maximum: %d\n", (a>b) ? a:b );
  return 0;
}
