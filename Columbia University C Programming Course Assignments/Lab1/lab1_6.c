/*
  Author: <Mert Ünsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 6
*/

#include <stdio.h>
#include <time.h>

#define noon 720

int main(){
  int sunset_hour, sunset_min, sunrise_hour, sunrise_min, sunrise_time, sunset_time;
  printf("Please enter the sunset hour: ");
  scanf("%d",&sunset_hour);
  printf("Please enter the sunset minute: ");
  scanf("%d",&sunset_min);
  printf("Please enter the sunrise hour:");
  scanf("%d",&sunrise_hour);
  printf("Please enter the sunrise minute:");
  scanf("%d",&sunrise_min);
  sunset_time = sunset_min + sunset_hour * 60;
  sunrise_time = sunrise_min + sunrise_hour * 60;
  
  time_t t;
  struct tm *now;
  t = time(0);
  now = localtime(&t);
  int hour = now->tm_hour;
  int min = now->tm_min;
  int now_time = min + hour*60;

  if (now_time > noon && now_time < sunset_time ){
    printf("Good afternoon!");
  }
  else if (now_time > sunset_time || (now_time >= 0 && now_time < sunrise_time)){
    printf("Good evening!");
  }
  else if (now_time >= sunrise_time && now_time <= noon){
    printf("Good morning");
  }
  else {
    printf("Bad Data");
  }
  
  return 0;
}
