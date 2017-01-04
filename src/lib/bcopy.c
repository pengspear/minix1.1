void
bcopy (register char *old, register char *new, int n)
{
/* Copy a block of data. */

  while (n--) *new++ = *old++;
}
