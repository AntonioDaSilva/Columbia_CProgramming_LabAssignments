/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab3>

  Solution for Lab 3 Problem 3
*/

#include <stdio.h>

int replaceDigit(int number, int d, int dp)
{
    if( number != 0)
    {
        int y = replaceDigit(number/10,d,dp);
        int x = number%10;
        y *=10;
        x = x == d ? dp:x;
        y += x;
        return y;
    }
    return 0;
}


int main(){
  
  int num, d, dp;
  printf("Enter the number: ");
  scanf("%d",&num);
  printf("Enter d: ");
  scanf("%d",&d);
  printf("Enter the d prime: ");
  scanf("%d", &dp);
  
  printf("Final number is: %d",replaceDigit(num, d, dp) );

  return 0;
  
}

