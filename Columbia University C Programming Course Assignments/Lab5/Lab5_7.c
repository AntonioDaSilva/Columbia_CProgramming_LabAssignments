/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 7
*/

#include <stdio.h>
#include <string.h>

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

int main(){
  char str1[100];
  char str2[100];
  printf("First string: ");
  scanf("%s",str1);
  printf("Second string: ");
  scanf("%s",str2);
    
  int len1 = lengthof(str1);
  int len2 = lengthof(str2);
  
  char str3[100];
  
  for (int i = 0; i < (len1 > len2 ? len2 : len1); i++){
        if (str1[len1 - i] == str2[len2 - i]){
          str3 = str1[len1-i];
        }
        else {
          break;
        }
  }
  
  char str_reversed = strrev(str3);
  printf("%s\n",str_reversed);
  
  return 0;    
}
