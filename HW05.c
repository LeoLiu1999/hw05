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
    while (str) {
        count++;
    }
    return count;
}


void main () {

}
