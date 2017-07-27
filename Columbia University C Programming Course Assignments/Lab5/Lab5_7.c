/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>
  Solution for Lab 5 Problem 7
*/

#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int lengthof(char arr[]){
  int count = 0;
  for (int i = 0; i<100; i++){
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
          str3[i] = str1[len1-i];
        }
        else {
          break;
        }
  }
  
  printf("%s\n",strrev(str3));
  
  return 0;    
}
