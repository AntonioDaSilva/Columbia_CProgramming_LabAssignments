/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 2
*/

#include <stdio.h>

int main(){
  char a;
  int b;
  printf("PLease enter a character: ");
  scanf("%c",&a);
  b = a;
  if (b<=90 && b>=65){
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  return 0;


}
