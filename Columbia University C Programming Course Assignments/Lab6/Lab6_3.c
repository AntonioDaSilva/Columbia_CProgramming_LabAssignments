/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab6>

  Solution for Lab 6 Problem 3
*/

#include <stdio.h>


int numberofelements(int number, int array[], int length) {
    if (length == 0) return 0;
    return (number == *array) + numberofelements(number, array+1, length-1);
}


int main(){
  int num;
  printf("Please enter element number: ");
  scanf("%d",&num);
  int arr[num];
  int i = 0;
  while(i < num){
    printf("Element %d: ",i);
    scanf("%d",&arr[i]);
    i++;
  }
  int check;
  printf("Please enter the number you want to check: ");
  scanf("%d",&check);
  printf("You have number %d, %d times in your array.\n", check, numberofelements(check,arr,num));

  return 0;
}
