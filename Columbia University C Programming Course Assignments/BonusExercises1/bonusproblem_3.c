/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Exercises 1>

  Solution for Bonus Exercises 1 Problem 3
*/

#include <stdio.h>

int main(){
  int a;
  
  printf("Please enter the number: ");
  scanf("%d",&a);
  
  if (a>0) {
    printf("It's a positive number.\n");
  }
  else if (a<0){
    printf("It's a negative number.\n");
  }
  else if (a==0){
    printf("The number is zero.\n");
  }
  else {
    printf("Bad data.\n");
  }

  return 0;




}
