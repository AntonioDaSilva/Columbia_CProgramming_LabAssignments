/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 3
*/

#include <stdio.h>

int main(){
  int a;
  printf("Please enter your number of years of schooling: ");
  scanf("%d",&a);
  if (a == 0){
    printf("None\n");
  }
  else if (a >= 1 && a <= 5){
    printf("Elemantary School\n");
  }
  else if (a >= 6 && a <= 8){
    printf("Middle School\n");
  }
  else if (a >= 9 && a <= 12){
    printf("High School\n");
  }
  else if (a >= 12){
    printf("College\n");
  }
  else{
    printf("Bad Data\n");
  }
  return 0;
}
