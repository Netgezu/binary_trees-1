#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * _print_array - Prints an array of integers
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */
void _print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	avl_t *root;
	int array[] = {
		98, 110, 43, 56, 2, 78, 123, 76, 234
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	root = array_to_avl(array, size);

	_print_array(array, size);
	binary_tree_print(root);
	_binary_tree_delete(root);
	return (0);
}
