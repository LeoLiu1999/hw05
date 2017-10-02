#include <stdio.h>
#include <string.h>

int myStrLen( char *str);
char * myStrCpy( char *dest, char *source );
char * myStrCat( char *dest, char *source );
int myStrCmp( char *s1, char *s2 );
char * myStrChr( char *s, char c );
// If we feel smart
//char * strstr( char *s1, char * s2 );

int myStrLen(char *str) {
  int count = 0;
  while (*str) {
    str++;
    count++;
  }
  return count;
}

int myStrCmp(char *s1, char *s2) {
  int compare = *s1++ - *s2++;
  while (!compare && (*s1 != 0) && (*s2 != 0)) {
    compare = *s1++ - *s2++;
  }
  return compare;
}


void main () {
  
}
