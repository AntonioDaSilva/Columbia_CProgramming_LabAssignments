/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab1>

  Solution for Lab 1 Problem 4
*/

#include <stdio.h>
#include <math.h>

double power(double a,double b){
  double result = 1.0;
  for (int i = 0; i<b ; i++){
    result *= a;
  }
  return result;
}

int main(){
  char c;
  double side, radius, volume_sphere, volume_cube ;
  printf("Cube : C\nSphere: S\nPlease enter your choice: ");
  scanf("%c",&c);
  if (c == 'C'){
    printf("Please enter the side length: ");
    scanf("%lf",&side);
    volume_cube = (power(side,3.0));
    printf("Volume of your cube is %lf\n",volume_cube);
  }
  else if (c == 'S'){
    printf("Please enter the radius of sphere: ");
    scanf("%lf",&radius);
    volume_sphere = (4*M_PI*power(radius,3.0)/3 );
    printf("Volume of your sphere is %lf\n",volume_sphere );
  }
  else {
    printf("Please enter a valid shape.");
  }
  return 0;


}
