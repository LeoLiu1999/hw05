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

int main(){
  char str1[] = "shenanigans";
  char str2[] = "stuff";
  printf("from myStrnCat: \n [%s]\n", myStrnCat(str1, str2, 3));
  char str3[] = "shenanigans";
  char str4[] = "stuff";
  printf("from strncat: \n [%s]\n", strncat(str3, str4, 3));

  return 0;
}
