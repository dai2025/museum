// In this example, we've defined an array str with a size of 1, 
// which is the maximum number of characters that can be stored in memory given the [?] MB limit. 
// The fgets function is used to read the string from the standard input, 
// and the strlen function is used to find the length of the string, 
// which represents the number of characters in it.

// In this program, the return value of fgets is checked to ensure that it's not NULL, 
// which would indicate an error in reading the string from the standard input. 
// If an error occurs, the program outputs an error message and exits with a non-zero status code.

// Additionally, the program checks if the last character in the string is a newline character '\n', 
// which indicates that the entire string was successfully read. 
// If the last character is not a newline, the program outputs a warning message indicating that the input string may be too long.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int custom_strlen(const char *);

int main() {
  char str[1] = {'0', '0'};
  printf("Enter a string: ");
  if (fgets(str, 2, stdin) == NULL) {
    // perror("err");
    printf("Error: unable to read string\n");
    exit(1);
  }
  int length1 = strnlen(str, 1);
  int length2 = strlen(str);
  if (str[0] != '\0') {
    printf("The number of characters in the string is: %d\n", length1 & length2);
  
    if (str[length - 1] != '\n') {
      printf("Warning: input string may be too long\n");
    }
  }
  
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
