/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 7
*/

#include <stdio.h>
#include <time.h>

int main(){
  
  int minutes;
  printf("How many minutes from now do you expect to be home?\n");
  scanf("%d",&minutes);

  time_t t;
  struct tm *now;
  t = time(0);
  now = localtime(&t);
  int hour = now->tm_hour;
  int min = now->tm_min;

  printf("Time : %d:%d\n",hour,min);

  if (minutes%60 == 0){
    if ((hour + minutes/60) >= 24){
      printf("You will get home at %d:%d .\n",((hour + minutes/60) % 24),min);
    }
    else {
      printf("You will get home at %d:%d .\n",(hour + minutes/60),min);
    }
  }
  else {
    if (hour + (minutes/60) >= 24){
      printf("You will get home at %d:%d .\n",((hour + (min + minutes)/60) % 24), (min+minutes)%60 );
     }
    else {
      printf("You will get home at %d:%d .\n",(hour + (min + minutes)/60), (min+minutes)%60 );
    }
    }
  

  return 0;
}
