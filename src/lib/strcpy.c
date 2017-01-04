char *
strcpy (register char *s1, register char *s2)
{
/* Copy s2 to s1. */
  char *original = s1;

  while (*s2 != 0) *s1++ = *s2++;
  *s1 = 0;
  return(original);
}
