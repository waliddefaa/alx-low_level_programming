/**
 * rev_string - reverses a string
 * @s: inpu
 * Return: Nothing
*/


void rev_string(char *s)
{
	int i, b, c;
	char v1, v2;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	b = i - 1;
	c = 0;

	while (b > i)
	{
		v1 = s[c];
		v2 = s[b];
		s[c] = v2;
		s[b] = v1;
		b--;
		c++;
	}
}
