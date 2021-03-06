/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 5
*/

#include <stdio.h>

#define constant_1 31
#define constant_2 30
#define constant_3 29
#define constant_4 28

int main(){
  int year, month;
  printf("Please enter the year: ");
  scanf("%d",&year);
  printf("Please enter the month: ");
  scanf("%d",&month);
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    printf("In %d, month number %d has %d days.\n", year, month, constant_1);
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11){
    printf("In %d, month number %d has %d days.\n", year, month, constant_2);
  }
  else if (month == 2){
    if (year%4 == 0){
     printf("In %d, month number %d has %d days.\n", year, month, constant_3); 
    }
    else {
      printf("In %d, month number %d has %d days.\n", year, month, constant_4);
    }
  }
  return 0;
}
