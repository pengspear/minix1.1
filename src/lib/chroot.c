#include "../include/lib.h"

PUBLIC int 
chroot (char *name)
{
  return callm3(FS, CHROOT, 0, name);

}
