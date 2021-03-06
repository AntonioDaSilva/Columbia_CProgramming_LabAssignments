/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 5
*/

#include <stdio.h>
#include <math.h>

int main(){
  int n;
  printf("Please enter the element number of vectors: ");
  scanf("%d",&n);
  
  int vector1[n];
  int vector2[n];
  
  for (int i = 0 ; i < n; i++){
    printf("Please enter element %d of vector 1: ",i);
    scanf("%d",&vector1[i]);
  }
  for (int i = 0 ; i < n; i++){
    printf("Please enter element %d of vector 2: ",i);
    scanf("%d",&vector2[i]);
  }
  
  double sum1 = 0;
  double sum2 = 0;
  
  for (int i = 0 ; i < n; i++){
    sum1 += (vector1[i])*(vector1[i]);
    sum2 += (vector2[i])*(vector2[i]);
  }

  sum1 = sqrt(sum1);
  sum2 = sqrt(sum2);
  double a = sum1 - sum2;
  printf("Eucledian distance between them is: %lf\n", a);
}
