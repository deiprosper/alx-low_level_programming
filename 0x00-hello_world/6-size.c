#include <stdio.h>

/**
 * main - main funtion
 *
 * return: 0 on success
 */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte", sizeof(long int));
	printf("Size of a long long in: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
