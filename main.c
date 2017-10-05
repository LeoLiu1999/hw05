#include <stdio.h>
#include <string.h>

int main(){
  char mychr = 'n';
  char mystr1[] = "shenanigans";
  char mystr2[] = "stuff";
  char chr = 'n';
  char str1[] = "shenanigans";
  char str2[] = "stuff";

  printf("Testing strlen:\n");
  printf("from myStrLen: %d\n", myStrLen(mystr1));
  printf("from : %d\n", strlen(str1));

  printf("Testing strcpy:\n");
  printf("from myStrCpy: [%s]\n", myStrCpy(mystr1, mystr2));
  printf("from strcpy: [%s]\n",strcpy(str1, str2));
  
  printf("Testing strncat:\n");
  printf("from myStrnCat: [%s]\n", myStrnCat(mystr1, mystr2, 3));
  printf("from strncat: [%s]\n", strncat(str1, str2, 3));

  printf("Testing strchr:\n");
  printf("from myStrChr: [%c]\n", myStrChr(mystr1, mychr));
  printf("from strchr: [%c]\n", strchr(str1, chr));
  
  printf("Testing strcmp:\n");
  printf("from myStrCmp: %d\n", myStrCmp(mystr1, mystr2));
  printf("from strcmp: %d\n", strcmp(str1, str2));
  return 0;
}
