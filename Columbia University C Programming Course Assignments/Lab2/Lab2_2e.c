/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab2>

  Solution for Lab 2 Problem 2_e
*/


#include <stdio.h>

int main(){
  int s,h;
  printf("Please enter the side: ");
  scanf("%d",&s);
  printf("Please enter the height: ");
  scanf("%d",&h);
  for(int i = 0; i<h; i++){
    for(int j = 0; j<(s-h+1+i); j++){
      printf("*");
    }
    printf("\n");
  }
  

  return 0;
}
