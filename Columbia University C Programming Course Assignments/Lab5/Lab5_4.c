/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 4
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

int check_str(char arr[], int length){
  if (arr[length-1] == 'y'){
    return 1;
  }
  else if (arr[length-1] == 's' || (arr[length-1] == 'h' && arr[length-2] == 'c') || (arr[length-1] == 'h' && arr[length-2] == 's') ){
    return 2;
  }
  else {
    return 0;
  }
}

int main(){
  char str[MAXLEN];
  printf("Enter the string: ");
  scanf("%s",str);
  int len = lengthof(str);
  if (check_str(str, lengthof(str)) == 1){
    str[len-1] = 'i';
    str[len] = 'e';
    str[len+1] = 's';
   }
  else if (check_str(str, lengthof(str)) == 2) {
    str[len] = 'e';
    str[len + 1] = 's';
  }
  else{
    str[len] = 's';
  }
  printf("Plural string: %s\n",str);
  return 0;
}
