/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab6>

  Solution for Lab 6 Problem 5
*/

#include <stdio.h>

int main(){
  int arr_ofbits[100];
  int num;
  printf("Please enter the number of bits: ");
  scanf(%d,&num);
  for (int i = 0; i<num; i++){
    printf("Please enter bit number %d: ",i);
    scanf("%d",&arr_ofbits[i]);
  }
  int k;
  printf("Please enter the Hamming distance: ");
  scanf("%d",&k);


  
  
  return 0;
}
