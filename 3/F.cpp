int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new)
{
	if (n_new == 0)
	{
		delete[] source;
		return NULL;
	}
	int* new_array = new int[n_new];
	if (source == NULL)
	{
		return new_array;
	}
	if (n_new < n_old)
	{
		for (unsigned int i = 0; i < n_new; i++)
			new_array[i] = source[i];
		delete[] source;
		return new_array;
	}
	for (unsigned int i = 0; i < n_old; i++)
	{
		new_array[i] = source[i];
	}
	delete[] source;
	return new_array;
}