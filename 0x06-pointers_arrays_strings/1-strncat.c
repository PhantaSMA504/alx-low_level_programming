/**
 * _strncat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be added
 * @n: bytes of @src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array 
	 * where if there is no null byte
	 * among the first n bytes
	 * the string placed in n will not be terminated
	 */

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	/**
	 * if the length of src is more than n
	 * write additional n bytes to dest
	 * to ensure a total of n bytesi is written
	 */

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
