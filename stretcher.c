char * myStrChr( char*s, char c){
  while(c - *s && *s){
    s ++;
  }
  return s;
}
