/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 1
*/

#include <stdio.h>

int main(){
  int a,b;
  int *pa = &a;
  int *pb = &b;
  printf("Enter the first number: ");
  scanf("%d",pa);
  printf("Enter the second number: ");
  scanf("%d",pb);
  if (*pa < *pb){
    printf("%d\n",a);
  }
  else{
    printf("%d\n",b);
  }
  return 0;
}
