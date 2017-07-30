/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab7>

  Solution for Lab 7 Problem 2
*/

#include <stdio.h>

struct catalog_entry_t{
  char author[100];
  char title[100];
  char publisher[100];
  int publishyear;

};

struct catalog_entry_t book0;

book0.author = "Mert Unsal";
book0.title = "Introduction to Structures";
book0.publisher = "Mert Publishing";
book0.publishyear = 2017;

int main(){
  
  return 0;
}
