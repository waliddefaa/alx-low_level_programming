/**
 * rev_string - reverses a string
 * @s: inpu
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char x;

	for (l = 0; s[l] != '\0'; ++l)



	for (i = 0; i < l / 2; ++i)
	{
		x = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = x;
	}

}
