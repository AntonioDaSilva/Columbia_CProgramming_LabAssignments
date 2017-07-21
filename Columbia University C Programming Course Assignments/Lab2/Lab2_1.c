/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab2>

  Solution for Lab 2 Problem 1
*/


#include <stdio.h>

int factorial(int x){
  int a = 1;
  for ( int i = 1 ; i<=x; i++){
    a *= i;
  }
  return a;
}

int main(){
  int a,b;
  printf("Enter the number k: ");
  scanf("%d",&a);
  printf("Enter the number n: ");
  scanf("%d",&b);

  printf("C(%d,%d):%d\n", b , a ,( factorial(b)) /( factorial(a) * factorial(b-a)) );

  return 0;
}
