/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab3>

  Solution for Lab 3 Problem 1
*/

#include <stdio.h>

void sorted(double num1, double num2, double num3){
  if (num1>num2){
    if (num2>num3){
      printf("In decreasing order: %lf %lf %lf\n",num1,num2,num3);
    }
    else {
      if (num3>num1){
	printf("In decreasing order: %lf %lf %lf\n",num3,num1,num2);
      }
	else {
	  printf("In decreasing order: %lf %lf %lf\n",num1,num3,num2);
	}	
    }
  }
  else {
    if (num2>num3){
      if (num1>num3){
	printf("In decreasing order: %lf %lf %lf\n",num2,num1,num3);
      }
      else {
	printf("In decreasing order: %lf %lf %lf\n",num2,num3,num1);
      }
    }
    else {
      printf("In decreasing order: %lf %lf %lf\n",num3,num2,num1);
    }
    
  }
}

int main(){
  double num1, num2, num3;
  printf("First number: ");
  scanf("%lf", &num1);
  printf("Second number: ");
  scanf("%lf", &num2);
  printf("Third number: ");
  scanf("%lf", &num3);

  sorted (num1, num2, num3);

  
  
  return 0;
}
