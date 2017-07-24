/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 4
*/

#include <stdio.h>

int main(){
  double matrix1[3][3];
  for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
      printf("Matrix number 1 row %d column %d: ", i, j);
      scanf("%lf",&matrix1[i][j]);
    }
  }
  double matrix2[3][3];
  for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
      printf("Matrix number 2 row %d column %d: ", i, j);
      scanf("%lf",&matrix2[i][j]);
    }
  }
  double matrix3[3][3];
  for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
      matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }
  for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
      printf("After substraction, final matrix number row %d column %d: %lf\n", i, j, matrix3[i][j]);
    }
  }
  

}
