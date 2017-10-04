#include <stdio.h>
#include <string.h>

char * myStrCpy( char *dest, char *source ) {
  char * og = dest;
  int length = strlen(source), count = 0;
  while (count < length) {
    *dest++ = *source++;
    count++;
  }
  *dest = 0;
  return og;
}
