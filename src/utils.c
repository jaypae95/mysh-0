#include "utils.h"
#include <string.h>
#include <stdlib.h>
#include <stio.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  int current = 0;
  int k = 0;
  char *token = NULL;
  char _command[8096] = {'\0', };

  while(command[current] != NULL) {
  _command[current] = command[current];
  current++;
  }

  token = strtok(_command, " ");
  *argc = 0;
  char **_argv = (char**)malloc(4*100);

  while (token != NULL) {
  _argv[*argc] = token;
  (*argc)++;
  token = strtok(NULL, " ");
  }

  argv = *_argv;

  }
