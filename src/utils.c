#include "utils.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void mysh_parse_command(const char* command, int *argc, char *** argv)
{
 int current = 0;
 int k = 0;
 char * token = NULL;
 char _command[8096] = {'\0', };

 while(command[current] != NULL) {
   _command[current] = command[current];
   printf("%c", _command[current]);
   current++;
 }

 token = strtok(_command, " ");

 *argc = 0;
 char **_argv = (char**)malloc(4*100);

 while(token!=NULL) {
   _argv[*argc] = token;
   (*argc)++;
   token = strtok(NULL, " ");
 }

 *argv = (char**)malloc(sizeof(char));

 for (int i = 0; i < *argc; i++) {
   argv[0][i] = (char*)malloc(sizeof(char));
 }

 for (int i = 0; i < *argc; i++) {
   strcpy(argv[0][i], _argv[i]);
 }

}
