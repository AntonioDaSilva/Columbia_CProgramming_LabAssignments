/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab3>

  Solution for Lab 3 Problem 2
*/

int lengthof_int(int num){
  int count = 0;
  while (num != 0){
    num /= 10;
    count += 1;
  }
  return count;
}

int sumDigit(int num){
  int sum = 0, digit;
  while (num > 0 ){
    digit = num % 10;
    sum += digit;
    num /= 10;
  }
  return sum;
}

#include <stdio.h>

int main(){
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);

  int length = lengthof_int(a);

  while (length > 1){
    a = sumDigit(a);
    length = lengthof_int(a);
  }

  printf("Result: %d",a);

  

  
}

