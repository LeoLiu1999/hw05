#include <stdio.h>
#include <string.h>

char * myStrnCat (char *dest, char *source, int n){
  int dest_length = strlen(dest);
  int i;
  for (i = 0; i < n && source[i]; i ++){
    dest[dest_length + i] = source[i];
  }
  dest[dest_length + n] = 0;
  return dest;
}
