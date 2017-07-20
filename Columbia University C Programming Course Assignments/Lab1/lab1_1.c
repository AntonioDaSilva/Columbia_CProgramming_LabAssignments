/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 1
*/

#include <stdio.h>

int main(){
  int a,b,c;
  
  printf("First number: ");
  scanf("%d",&a);
  printf("Second number: ");
  scanf("%d",&b);
  printf("Third number: ");
  scanf("%d",&c);

  if (a>b) {
    if (c<a && c>b){
      printf("Yes!");
    }
    else {
      printf("No!");
    }
  }
  else {
    if (c>a && c<b){
      printf("Yes!");
    }
    else{
      printf("No!");
    }
  }
  return 0;
  
}
