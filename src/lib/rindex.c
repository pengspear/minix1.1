char *
rindex (register char *s, register char c)
{
  register char *result;

  result = 0;
  do
	if (*s == c)
		result = s;
  while (*s++ != 0);
  return(result);
}
