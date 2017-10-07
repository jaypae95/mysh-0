#include <string.h>
#include <unistd.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  chdir(argv[1]);

 return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  char dirname[200];
  getcwd(dirname,200);
  printf("%s", dirname);
  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  if (argc>1) {
  return 1;
  }
}

int validate_pwd_argv(int argc, char** argv) {
  if(argc>0)  return 1;
}
