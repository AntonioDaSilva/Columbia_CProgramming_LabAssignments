/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 2
*/

#include <stdio.h>

int main(){
  int arr[10];
  // to test my program, i created an array and gave values to each element
  for (int i= 0 ; i<10; i++){arr[i] = i;}
  int *aptr = arr+3;
  printf("%d\n",*aptr+6);

  return 0;
}
