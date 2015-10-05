#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copy(char *str){

  char buffer[64] = {};
  int i = 0;

  if( sizeof(str) <= sizeof(buffer) ){
//   int limit = strlen(str);
//    while( i < limit ){
//      buffer[i] = str[i];
//      i++;
//    }
    memcpy(buffer, str, strlen(str));
  }
  printf("buffer = %s\n", buffer);
  printf("strlen(buffer)=%d\n", strlen(buffer));

  return;
}

int main(int argc, char *argv[]){
  printf("%s\n", argv[1]);
  copy((char *)argv[1]);
}
