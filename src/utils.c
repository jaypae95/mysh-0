#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  char *arr[];
  int i = 0;
  int j = 0;
  while(*command != null) {
    if(command[i] = " ") {
      for (int k=0; k<i; k++) {
        arr[j][k] = command[k]
      }
    j++;
  }
}
