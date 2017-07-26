// not finished yet sorry :(
/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 5
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


int alpha (char arr[][MAXLEN], int new_index){
  // this function returns arr index of alphabetized new_index
  int temp = 0;
  for (int i = 1; i<MAXLEN; i++){
  if (strcmp(arr[temp] , arr[temp+i]) )
    }

}



int main(){
  char last[MAXLEN][MAXLEN];
  char first[MAXLEN][MAXLEN];
  int age[MAXLEN];
  int nm;
  
  printf("Please enter how many people you want to add: ");
  scanf("%d",&nm);
  
  for (int i = 0; i<nm; i++){
    printf("Last Name: ");
    scanf("%s",last[i]);
    printf("First Name: ");
    scanf("%s",first[i]);
    printf("Age: ");
    scanf("%d",&age[i]);
  }
  
  // now we have last first and age arrays

  int j;
  printf("Alphabetized List\n");
  for(int i = 0; i<nm; i++){
    j = alpha(last, i);
    printf("%s  %s  %d\n", last[j], first[j], age[j]);
  }
  
  
  
  return 0;
}
