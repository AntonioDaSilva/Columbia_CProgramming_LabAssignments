/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab6>

  Solution for Lab 6 Problem 2
*/

#include <stdio.h>

#define MAXLEN 100

int small(int array[], int size){
  if(size == 1){
    return array[0];
  }
  else {
    return (array[size] < small(array,size-1)) ? array[size] : small(array,size-1);
  }
}


int main(){
  int num;
  int arr[MAXLEN];
  printf("NUmber of inputs: ");
  scanf("%d",&num);
  for (int i = 0; i<num; i++){
    printf("Number %d: ",i);
    scanf("%d",&arr[i]);
  } 
  int sml = small(arr, num);
  printf("Smallest number: %d\n",sml);
}
