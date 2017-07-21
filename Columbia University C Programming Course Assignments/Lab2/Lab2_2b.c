/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab2>

  Solution for Lab 2 Problem 2_b
*/


#include <stdio.h>

int main(){
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  
  for(int i = 0; i<(a/2) ; i++){
    for(int j = 0; j<i; j++){
      printf(" ");
    }
    printf("*");
    for(int j = 0; j < (a/2)-(2*i)+1 ; j++){
      printf(" ");
    }
    printf("*\n");
  }
  if (a%2 != 0){
    for (int i = 0; i<(a/2) ; i++){
      printf(" ");
    }
    printf("*\n");
  }
  for(int i = 0; i<(a/2); i++ ){
    for (int j = 0; j<(a/2 - (i+1)); j++){
      printf(" ");
    }
    printf("*");
    if (a%2 != 0){
    for (int k = 0; k<(2*i+1) ; k++){
      printf(" ");
    }
    }
    else {
    for (int k = 0; k<(2*i) ; k++){
      printf(" ");
    }
    }
    printf("*\n");
  }
  return 0;
  
}
