/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 8
*/

#include <stdio.h>
#include <math.h>

double normalize_element( double arr[] ,int index, double denom){
  double normalized_element  = arr[index]/denom;
  return normalized_element;
}

void print_vector(double arr[] , int l){
  for(int i = 0; i<l; i++){
    printf("Normalized vector element number %d: %lf\n",i ,arr[i]);
  }
}

int main(){
  int l;
  
  printf("Please enter the length of your vector: ");
  scanf("%d",&l);
  
  double arr[l];
  
  for (int i = 0; i < l; i++){
    printf("Please enter element number %d: ",i);
    scanf("%lf",&arr[i]);
  }

  printf("\nVector normalization started..\n\n");

  double denom  = 0.00;
  
  for (int i = 0; i<l; i++){
    denom += (arr[i]*arr[i]);
  }
  
  denom = sqrt(denom);
  
  double normalized_vector[l];
  for (int i = 0; i<l; i++){
    normalized_vector[i] = normalize_element(arr, i, denom);
  }

  printf("Vector normalization finished. \n\n");

  print_vector(normalized_vector, l);

  
  return 0;
}
