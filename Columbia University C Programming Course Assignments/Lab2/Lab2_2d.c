/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab2>

  Solution for Lab 2 Problem 2_d
*/


#include <stdio.h>

int main(){
  int a,q;
  printf("Enter the number: ");
  scanf("%d",&a);
  for (int i = 1; i<=a ; i++){
    for (int k = 0; k<i; k++){
      printf(" ");
    }
    for (int j = 0; j<(a-i) ; j++){
      printf("*");
    }
    printf("\n");
  }

}
