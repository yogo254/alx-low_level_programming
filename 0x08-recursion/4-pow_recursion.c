/**
 * _pow_recursion- get x power y
 * @x: int x
 * @y: int y
 * Description:  get x power y
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
