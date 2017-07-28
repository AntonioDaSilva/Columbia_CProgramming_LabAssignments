/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab6>

  Solution for Lab 6 Problem 1
*/

#include <stdio.h>

#define MAXLEN 100

int lengthof(int arr[]){
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

void reverseDisplay(int arr[], int start, int end){
   int temp;
   if (start >= end)
     return;
   temp = arr[start];   
   arr[start] = arr[end];
   arr[end] = temp;
   reverseDisplay(arr, start+1, end-1);   
}


int main(){
  int num;
  printf("Enter the numbers of input: ");
  scanf("%d",&num);
  int arr[num];
  for (int i = 0; i<num; i++){
    printf("Please enter the number %d: ",i);
    scanf("%d",&arr[i]);
  }
  reverseDisplay(arr,0,num-1);
  printf("Reversed array is: ");
  for (int i = 0; i<num; i++){
    printf("%d ",arr[i]);
  }
  return 0;
}


