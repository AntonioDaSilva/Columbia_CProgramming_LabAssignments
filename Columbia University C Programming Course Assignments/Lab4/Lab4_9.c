/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab4>

  Solution for Lab 4 Problem 9
*/
#define GUESS_CHANCE 15

#include <stdio.h>

int main(){
  //array definitions
  char g[GUESS_CHANCE];
  char word[7] = {'h','a','n','g','m','a','n'};
  char arr[7];
  for (int i = 0; i<7; i++){
    arr[i] = '*';
  }

  //variable definitions
  int count_true = 0;
  int count_false = 0;
  int temp;

  //output
  printf("Welcome to Hangman! Let's start guessing!\n");

  for (int i = 0; i<GUESS_CHANCE; i++){
    // take the input
    printf("Guess number %d:",i);
    scanf("%c",&g[i]);

    temp = count_true;
    
    for (int j = 0; j<7; j++){
      if (g[i] == word[j] && arr[j] != g[i]){
	arr[j] = g[i];
	count_true += 1;
      }
      else if(arr[j] == g[i]){
	printf("You have entered the same character again.\n");
      }
      else {
	printf("Wrong guess :(\n");
      }
    }

    if (temp == count_true){
      count_false += 1;
    }

    if (count_true == 7){
      printf("Congratz! You won!\n");
    }

    
    if (GUESS_CHANCE-i-1 != 0){
    printf("Up to now, you have guessed %d characters correct,, and %d characters wrong. You still have %d guess chance.\n", count_true, count_false, GUESS_CHANCE-i-1);
    }

    
  }
  printf("Unfortunately you lost :( Computer won!\n");

  
  return 0;
}
