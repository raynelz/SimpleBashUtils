#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 80

int main(int argc, char *argv[]) {
  FILE *file;
  char arr[N];

  file = fopen("./test.txt", "r");

  while (fgets(arr, N, file) != NULL) {
    printf("%s", arr);
  }

  printf("\n");
  fclose(file);
  return 0;
}