/**
 * rev_string - reverses a string
 * @s: inpu
 * Return: Nothing
*/



void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;
	char temp;

	while (i < j) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
