#include "../include/lib.h"

PUBLIC int 
creat (char *name, int mode)
{
  return callm3(FS, CREAT, mode, name);
}
