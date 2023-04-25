#include "sort.h"
/**
 * swap - swaps two integers
 * @x: int
 * @y: int
 * Return: swapped int, void.
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp
}

/**
 * partition - partition an array using pivot
 * @array: Array 
