/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 6
*/

// Here i just came up with an algorithm described below.

/*
  en = element n
  [e0,e1,e2,e3,e4,e5,e6...,ei]
  to check e0, we need to compare that with all other elements in the array
  to check e1, we just compared e1 with other elemnts which has bigger inex than e1
  and i just did it for all elements
 */

#include <stdio.h>


void check( int array[], int x ){
  int check = 0;
  for ( int i = 0; i < x; i++){
    for (int j = i+1; j < x; j++){
      if (array[i] == array[j]){
	check = 1;
      }
    }
  }
  if (check == 1){
    printf("There are duplicate elements in the array.");
  }
  else {
    printf("There aren't any duplicate elements in the array.");
  }
}

int main(){
  int a;
  printf("Please enter the number of elements of your array: ");
  scanf("%d",&a);
  int arr[a];
  for (int i = 0; i<a; i++){
    printf("Element %d: ",i);
    scanf("%d",&arr[i]);
  }
  check(arr,a);
  
}
