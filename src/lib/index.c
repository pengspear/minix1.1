char *
index (register char *s, register char c)
{
  do {
	if (*s == c)
		return(s);
  } while (*s++ != 0);
  return(0);
}
