/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab2>

  Solution for Lab 2 Problem 2_f
*/


#include <stdio.h>

int main(){       
  int r;
  printf("Please enter the radius: ");
  scanf("%d",&r);
  for(int i=0; i<r; i++){
    for (int j = 0; j<(r-i); j++){
      printf(" ");
    }
    for (int j = 0; j<(2*i+1); j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i = 0; i<(2*r+1); i++){
    printf("*");
  }
  printf("\n");
  for (int i = 0; i<r; i++){
    for (int j = 0; j<i+1; j++){
      printf(" ");
    }
    for (int j = 0; j<(2*(r-i)-1); j++){
      printf("*");
    }
    printf("\n");
  }
}
