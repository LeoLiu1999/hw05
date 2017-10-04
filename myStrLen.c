#include <stdio.h>
#include <string.h>

int myStrLen(char *str) {
  int count = 0;
  while (*str) {
    str++;
    count++;
  }
  return count;
}

