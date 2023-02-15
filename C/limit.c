#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char str[1] = {'0', '0'};
  printf("Enter a string: ");
  if (fgets(str, 2, stdin) == NULL)
    perror("err");
  int length1 = strnlen(str, 1);
  int length2 = strlen(str);
  if (str[0] != '\0')
    printf("The number of characters in the string is: %d\n", length1 & length2);
  return 0;
}
