/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 1
*/

#include <stdio.h>
#include "string.h"

#define MAXLENGTH 100

int main(){
  char str[MAXLENGTH];
  printf("Please enter the string: ");
  fgets (str, MAXLENGTH, stdin);
  for (int i = 0; i<strlen(str); i++){
    if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'){
      printf("%c",str[i]);
    }
  }
  
  
  return 0;
} 
