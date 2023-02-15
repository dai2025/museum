// In this example, we've defined an array str with a size of 1, 
// which is the maximum number of characters that can be stored in memory given the [?] MB limit. 
// The fgets function is used to read the string from the standard input, 
// and the strlen function is used to find the length of the string, 
// which represents the number of characters in it.
  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int custom_strlen(const char *);

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

// In this implementation, we define a function custom_strlen that takes a pointer to a string as an argument. 
// The function uses a loop to iterate through the string until it reaches the null terminator '\0'. 
// The variable count is used to keep track of the number of characters in the string, and is incremented with each iteration of the loop. 
// Finally, the function returns the value of count, which is the length of the string.

int custom_strlen(const char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
