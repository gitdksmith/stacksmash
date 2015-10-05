#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void copy(char *str){
  char buffer[64] = {};
  strcpy(buffer, str);
  return;
}

int main(int argc, char *argv[]){
  assert(argc > 1);
  printf("%s\n", argv[1]);
  copy((char *)argv[1]);
}
