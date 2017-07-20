/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Exercises 1>

  Solution for Bonus Exercises 1 Problem 2
*/

#include <stdio.h>

int main(){
  int a,b,c;
  printf("Please enter first number: ");
  scanf("%d",&a);
  printf("Please enter the second number: ");
  scanf("%d",&b);
  printf("Please enter the third number: ");
  scanf("%d",&c);
  if (a > b) { if(a > c) { printf("Maximum: %d\n",a); } else { printf("Maximum: %d\n",c); } } 
  else { if (b > c) { printf("Maximum: %d\n",b); } else { printf("Maximum: %d\n",c); } }
  return 0;
}
