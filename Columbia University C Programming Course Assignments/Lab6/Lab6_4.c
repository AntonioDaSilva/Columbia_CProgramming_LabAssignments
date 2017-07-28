/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab6>

  Solution for Lab 6 Problem 4
*/

#include <stdio.h>

int f(int x){
  if (x <= 0){
    return 0;
  }
  else {
    return (f(x-1) + 2);
  }
}

int main(){
  printf("Set of numbers generated by that definition:\n");
  for (int i = -10; i<100; i++){
    printf("%d\n",f(i));
  }
  for (int i = 0; i<5; i++){
    printf(".\n");
  }
  return 0;
}
