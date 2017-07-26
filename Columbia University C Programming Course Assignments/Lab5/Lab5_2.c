/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 2
*/

#include <stdio.h>
#include "string.h"

int factorial(int x){
  int a = 1;
  for ( int i = 1 ; i<=x; i++){
    a *= i;
  }
  return a;
}

void fact_calc(int x){
  printf("* %d! = ",x);
  for (int i = 1; i<x; i++){
    printf("%d x ",i);
  }
  printf("%d ",x);
  printf("= %d  *\n",factorial(x));
}

int main(){
  int x;
  while (1){
  printf("Enter an integer between 0 and 9 or -1 to quit =>  ");
  scanf("%d",&x);
  if (x == -1){
    break;
  }
  else if (x>0){
    fact_calc(x);
  }
  else {
    printf("Please do not enter a negative nunber other than -1.\n");
  }
  
  }

  return 0;
}
