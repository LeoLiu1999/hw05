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
  int ans = 0, count = 0, max = myStrLen(s1), compare = *s1++ - *s2++;
  if (myStrLen(s2) > count) {
    count = myStrLen(s2);
  }
  while ((count < max) && !compare) {
    compare = *s1++ - *s2++;
    count++;
  }
  return ans;
}


void main () {
  
}
