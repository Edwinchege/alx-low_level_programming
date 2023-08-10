#include <stdio.h>
int main (void)
{
	printf("Size of a char: %x bytes\n", sizeof(char));
	printf("Size of a int: %x bytes\n", sizeof(int));
	printf("Size of a long int: %x bytes\n", sizeof(long int));
	printf("Size of a long long int: %x bytes\n", sizeof(long long int));
	printf("Size of a float: %x bytes\n", sizeof(float));
	return 0;
}
