/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab7>

  Solution for Lab 7 Problem 3
*/

#include <stdio.h>


struct pos{
  int row;
  int column;
};

struct pos pos_bishop;


  

int main(){
  printf("Row position of bishop: ");
  scanf("%d",&pos_bishop.row);
  printf("Column position of bishop: ");
  scanf("%d",&pos_bishop.column);

  int temprow = pos_bishop.row;
  int tempcolumn = pos_bishop.column;

  int cc = 1;

  printf("Possible Moves\n");
  
  while (temprow <= 8 && tempcolumn <= 8){
    if (cc != 1){
      printf("Row: %d ** Column: %d\n",temprow,tempcolumn);
    }
    temprow +=1;
    tempcolumn += 1;
    cc = 0;
    
  }

  temprow = pos_bishop.row;
  tempcolumn = pos_bishop.column;

  cc = 1;

    while (temprow > 0 && tempcolumn > 0){
    if (cc != 1){
      printf("Row: %d ** Column: %d\n",temprow,tempcolumn);
    }
    temprow -=1;
    tempcolumn -= 1;
    cc = 0;
    
  }

     temprow = pos_bishop.row;
  tempcolumn = pos_bishop.column;


    cc = 1;

      while (temprow <= 8 && tempcolumn > 0){
    if (cc != 1){
      printf("Row: %d ** Column: %d\n",temprow,tempcolumn);
    }
    temprow +=1;
    tempcolumn -= 1;
    cc = 0;
    
  }

       temprow = pos_bishop.row;
  tempcolumn = pos_bishop.column;


      cc = 1;

        while (temprow > 0 && tempcolumn <= 8){
    if (cc != 1){
      printf("Row: %d ** Column: %d\n",temprow,tempcolumn);
    }
    temprow -=1;
    tempcolumn += 1;
    cc = 0;
    
  }


	return 0;
  

  

}



