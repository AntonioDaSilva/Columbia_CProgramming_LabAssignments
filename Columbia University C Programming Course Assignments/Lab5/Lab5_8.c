/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 8
*/

#include <stdio.h>

int main(){
  FILE *inp;
  FILE *outp;
  char str[1000];
  
  inp = fopen("data.txt","r");
  outp = fopen("outdata.txt","w");

  fscanf(inp, str, '\r');
  printf("%s",str);
  return 0;
}
