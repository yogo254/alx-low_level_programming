/**
 * swap_int- swap pointer values
 * @a: first pointer
 * @b: second poninter
 *
 * Description: swap a and b pointer values.
 * Return: exist status
 */

void swap_int(int *a, int *b)
{
	int *c = *a;

	*a = *b;
	*b = *c;
}
