/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab7>

  Solution for Lab 7 Problem 6
*/

#include <stdio.h>

struct battery_t{
  double voltage;
  double max_stored_energy;
  double stored_energy;
};

int power_device(double time, double amps, struct battery_t battery1){
  double k = ( (battery1.stored_energy) - (battery1.voltage*amps*time) );
  if (k > 0){
    return 1;
  }
  else {
    return 0;
  }
}

double max_time(double amps, struct battery_t battery1){
  return (battery1.stored_energy) / (amps*battery1.voltage);
}

void recharge(struct battery_t battery1){
  battery1.stored_energy = battery1.max_stored_energy; 
}

int main(){
  struct battery_t b1;
  b1.voltage = 12;
  b1.max_stored_energy = 5000000;
  b1.stored_energy = 5000000;
  int i = power_device(900 ,4, b1);
  if (i == 1){
    b1.stored_energy -= b1.voltage*4*900;
  }
  printf("%d\n",i);
  printf("Remaining energy: %lf\n",b1.stored_energy);
  printf("Maximum time with remaining energy: %lf\n",max_time(8.00, b1));
  b1.stored_energy = b1.max_stored_energy;
  printf("Maximum time with full energy: %lf\n",max_time(8.00, b1));
  return 0;
}
