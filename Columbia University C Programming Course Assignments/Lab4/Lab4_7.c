/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 7
*/

#include <stdio.h>
#include <math.h>

int main(){
  int arr1[20];
  int arr2[20];
  int i = 0;
  do{
    printf("Array 1 element %d (enter -1 to exit): ",i+1);
    scanf("%d",&arr1[i]);
    i++;
  } while (arr1[i - 1] != -1 && i < 20);

  for (int k = i-1; k<20; k++){
    arr1[k] = 0;
  }

  i = 0;
  do{
    printf("Array 2 element %d (enter -1 to exit): ",i+1);
    scanf("%d",&arr2[i]);
    i++;
  } while (arr2[i - 1] != -1  && i < 20);

  for (int k = i-1; k<20; k++){
    arr2[k] = 0;
  }

  int arr3[20];

  double sum = 0;
    
  for (int j = 0; j<20; j++){
    arr3[j] = arr1[j] * arr2[j];
    sum += arr3[j]*arr3[j];
    printf("%d   *    %d    =    %d\n",arr1[j], arr2[j], arr3[j]);
  }

  sum = sqrt(sum);

  printf("Sum of squareroots: %lf\n",sum);
  return 0;
}
