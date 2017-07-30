/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab7>

  Solution for Lab 7 Problem 1
*/

#include <stdio.h>

struct long_lat_t{
  int degrees;
  int minutes;
  char direction[1];
};

struct long_lat_t long_lat_t1;

void print_long_lat(struct long_lat_t long_lat_t1){

  printf("Degrees: %d\n",long_lat_t1.degrees);
  printf("Minutes: %d\n",long_lat_t1.minutes);
  printf("Direction: %s\n",long_lat_t1.direction);
}

void scan_long_lat(){
  printf("Please enter degrees: ");
  scanf("%d",&long_lat_t1.degrees);
  printf("Please enter minutes: ");
  scanf("%d",&long_lat_t1.minutes);
  printf("Please enter direction: ");
  scanf(" %c",long_lat_t1.direction);
}

int long_lat_equal(struct long_lat_t long_lat_t1, struct long_lat_t long_lat_t2){
  if (long_lat_t1.degrees == long_lat_t2.degrees && long_lat_t1.minutes == long_lat_t2.minutes && long_lat_t1.direction == long_lat_t2.direction){
    return 1;
  }
  else {
    return 0;
  }
  
}


int main(){
  scan_long_lat();
  print_long_lat(long_lat_t1);
  return 0;
}
