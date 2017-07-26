/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 3
*/

#include <stdio.h>
#include "string.h"

#define MAXLEN 100

int lengthof(char arr[]){
  int count = 0;
  for (int i = 0; i<MAXLEN; i++){
    if (arr[i] != '\0'){
      count += 1;
    }
    else {
      break;
    }
  }
  return count;
}
int hydroxide(char arr[], int length){
  if (arr[length-1] == 'H' && arr[length-2] == 'O'){
    return 1;
  }
  return 0;
}

int main(){
  char str[MAXLEN];
  printf("Enter the compound: ");
  scanf("%s",str);
  if (hydroxide(str,lengthof(str)) == 1){
    printf("True.\n");
  }
  else {
    printf("False.\n");
  }
  
  
  
}
