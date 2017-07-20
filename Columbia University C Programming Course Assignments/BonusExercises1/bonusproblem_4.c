/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Exercises 1>

  Solution for Bonus Exercises 1 Problem 4
*/

#include <stdio.h>

int main(){
  int a;
  printf("Please enter the number: ");
  scanf("%d",&a);
  if (a%5 == 0 && a%11==0){
    printf("The number you entered is divisible by both 5 and 11.\n");
  }
  else if (a%5 == 0 && a%11!=0){
    printf("The number you entered is divisible by 5, but it is not divisible by 11.\n");
  }
  else if (a%5 != 0 && a%11==0){
    printf("The number you entered is divisible by 11, but it is not divisible by 5.\n");
  }
  else {
    printf("The number you entered is not divisible by 5 or 11.\n");
  }
  return 0;
}
