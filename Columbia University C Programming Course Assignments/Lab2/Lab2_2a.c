/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab2>

  Solution for Lab 2 Problem 2_a
*/


#include <stdio.h>

int main(){
  int h,w;
  printf("Enter the width: ");
  scanf("%d",&w);
  printf("Enter the height: ");
  scanf("%d",&h);
  for(int i = 0; i<w ; i++){
    printf("*");
  }
  printf("\n");
  for (int i = 0; i<(h-2) ; i++){
    printf("*");
    for (int j = 0; j<(w-2) ; j++){
      printf(" ");
    }
    printf("*\n");
  }
  for(int i = 0; i<w ; i++){
    printf("*"\n);
  }
  

}
