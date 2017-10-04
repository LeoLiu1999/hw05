#include <stdio.h>
#include <string.h>

int myStrCmp(char *s1, char *s2) {
  int compare = *s1++ - *s2++;
  while (!compare && (*s1 != 0) && (*s2 != 0)) {
    compare = *s1++ - *s2++;
  }
  return compare;
}
