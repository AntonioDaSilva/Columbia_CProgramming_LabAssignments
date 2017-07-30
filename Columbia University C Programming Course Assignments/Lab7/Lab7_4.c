/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab7>

  Solution for Lab 7 Problem 4
*/

#include <stdio.h>

struct words{
  char language[20][30];
  char words[20][30];
  int word_num;
}


  
void load_word_list(struct words word1){
  FILE *file;

  file = fopen("outdata.txt","w");
  for (int i = 0; i<20; i++){
    if(word1.words[i] != NULL){
    fprintf(file,"%d    %s    %s\n", i, word1.language[i], word1.words[i]);
    }
  }
  fclose(file);
}



void add_word(struct words word1, char word[]){
  int count = 0;
  for (int i = 0; i<20; i++){
    if (word1.words[i] != NULL){
      word1.words[i] = word;
      break;
    }
    else {
      count += 1;
    }
    if (count == 20){
      printf("Struct is full. Data cannot be added.\n");
    }
    else {
      printf("Data added to struct successfully.\n");
    }
  }
}



int contains(struct words word1, char word[]){
  for (int i = 0; i<20; i++){
    if (word1.words[i] == word){
      break;
      return 1;
    }
  }
  return 0;
}



int equal_lists(struct words word1, struct words word2){
  int count = 0;
  for (int i = 0; i<20; i++){
    if (contains(word1, word2.words[i]) == 1){
      count += 1;
    }
  }
  if (count == 20){
    return 1;
  }
  else {
    return 0;
  }
}

void display_word_list(struct words word1){
  for (int i = 0; i<20; i++){
    if(word1.words[i] != NULL){
      printf("%d    %s    %s\n", i, word1.language[i], word1.words[i]);
    }
  }
}

int main(){
  return 0;
}




