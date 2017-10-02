#include <stdio.h>
#include <string.h>

char * myStrChr( char*s, char c){
  while(c - *s && *s){
    s ++;
  }
  return s;
}

int main(){
  char[] str = "shenanigans";
  char chr = 'n';
  printf("from myStrChr: \n %c", strchr(str, chr));
  printf("from strchr: \n %c", myStrChr(str, chr));

  return 0;
}
    
