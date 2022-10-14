#include <stdio.h>
/**
 * main- function that prints the size of various data types.
 *
 * Return:0 if the code compiles without error
*/
int main(void)
{
	printf("char is %ld byte(s)\n", sizeof(char));
	printf("int is %ld byte(s)\n", sizeof(int));
	printf("long int is %ld byte(s)\n", sizeof(long int));
	printf("long long int is %ld byte(s)\n", sizeof(long long int));
	printf("float is %ld byte(s)\n", sizeof(float));
	return (0);
}
