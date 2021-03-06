/*
  Author: <Mert Unsal>
  Course: <Introduction to COmputer Programming: Fundamentals of C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab5>

  Solution for Lab 5 Problem 6
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char    arr[1024];
    char   *line;
    size_t  n;

while (NULL != (line = fgets(arr, sizeof arr, stdin))) {
    while (isspace(*line))
            line++;
    n = strcspn(line, "\r\n");
    while (n > 0 && isspace(line[n - 1]))
        n--;
    if (n < 1)
        break;
    line[n] = '\0';
    while (1) {
        while (n > 0 && !isspace(line[n - 1]))
            n--;
        fputs(line + n, stdout);
        if (n < 1) {
            fputs("\n", stdout);
            break;
            }
        fputc(' ', stdout);
        while (isspace(line[n - 1]))
            n--;
        line[n] = '\0';
        }
    }
    return 0;
}
