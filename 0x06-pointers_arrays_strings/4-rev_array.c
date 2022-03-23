void reverse_array(int *a, int n)
{
	int ar[n];

	for (int i = n - 1; i >= 0; --i)
	{
		int index = (n - 1) - i;

		ar[index] = a[i];
	}

	a = ar;
}
