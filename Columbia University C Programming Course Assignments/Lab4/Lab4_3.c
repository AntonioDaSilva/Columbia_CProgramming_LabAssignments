/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 3
*/

#include <stdio.h>

int main(){
  double arr[10];
  double sum = 0;
  int count = 0;
  for (int i = 0; i<10 ; i++){
    printf("Please enter the number %d: ",i);
    scanf("%lf",&arr[i]);
    sum += arr[i];
  }
  double average = sum/10;
  for (int i = 0; i<10 ; i++){
    if (arr[i] <= average){
      count += 1;
    }
  }
  printf("%d numbers are below the average.\n",count);
  
}
