/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab7>

  Solution for Lab 7 Problem 5
*/

#include <stdio.h>

struct transformer_t{
  int n1;
  int n2;
  double v1;
  double i1;
};

struct transformer_t t0;

double v_out(struct transformer_t t1){
  return (( (t1.v1) * (t1.n2) )/(t1.n1));
}

double i_out(struct transformer_t t1){
  return (( (t1.i1) * (t1.n2) )/(t1.n1));
}

void scan_transformer(){
  printf("N1: ");
  scanf("%d",&t0.n1);
  printf("N2: ");
  scanf("%d",&t0.n2);
  printf("V1: ");
  scanf("%lf",&t0.v1);
  printf("I1: ");
  scanf("%lf",&t0.i1); 
}

void print_transformer(struct transformer_t t1){
  printf("N1: %d",t1.n1);
  printf("N2: %d",t1.n2);
  printf("V1: %d",t1.v1);
  printf("I1: %d",t1.i1);
}

void set_n1_for_v2(struct transformer_t t1, double v2){
  t1.n1 =( (t1.v1*t1.n2) / (v2) );
}

void set_v1_for_v2(struct transformer_t t1, double v2){
  t1.v1 =( (v2*t1.n1) / (t1.n2) );
}

void set_n2_for_v2(struct transformer_t t1, double v2){
  t1.n2 =( (v2*t1.n1) / (t1.v1) );
}

void set_n2_for_i2(struct transformer_t t1, double i2){
  t1.n2 =( (i2*t1.n1) / (t1.i1) );
}




int main(){
  return 0;
}

