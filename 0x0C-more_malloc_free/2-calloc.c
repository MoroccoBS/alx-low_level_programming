#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 * Return: pointer to the resulting string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
