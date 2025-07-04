/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/*
	 * Loop from the beginning of the array to the middle.
	 * In each iteration, swap the element at index `i` with the
	 * element at the corresponding index from the end of the array.
	 */
	for (i = 0; i < n / 2; i++)
	{
		/* Store the value of the current element in a temporary variable */
		temp = a[i];

		/*
		 * Assign the value of the corresponding element from the end
		 * to the current element's position.
		 */
		a[i] = a[n - 1 - i];

		/* Assign the stored original value to the end element's position */
		a[n - 1 - i] = temp;
	}
}
