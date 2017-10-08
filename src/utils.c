#include "utils.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//
void mysh_parse_command(const char* command, int *argc, char *** argv)
{
 int current = 0;
 int k = 0;
 char * token = NULL;
 char _command[8096] = {'\0', };


 while(command[current] != NULL) {
   _command[current] = command[current];
   current++;
 }

 if( _command[strlen(_command)-1] == '\n'){
  _command[strlen(_command)-1] = '\0';
  }
 token = strtok(_command, "' ''\n''\t'");

 *argc = 0;
 char **_argv = (char**)malloc(sizeof(char)*30);
 if (token == NULL) {
 *argc = 1;
 *argv = (char**)malloc(sizeof(char)*30);
 argv[0][0] = (char*)malloc(sizeof(char));
 strcpy(argv[0][0],"");
 return;
 }
 while(token!=NULL) {
   _argv[*argc] = token;
   (*argc)++;
   token = strtok(NULL, "' ''\n''\t'");
 }
 

 *argv = (char**)malloc(sizeof(char)*30);
 
 for (int i = 0; i < *argc; i++) {
  argv[0][i] = (char*)malloc(sizeof(char)*30);
  strcpy(argv[0][i], _argv[i]); 
 }

}

