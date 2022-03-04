#include <stdio_ext.h>

int main(int argc, char const *argv[])
{
	int a = 65;
	// When printing you must define the datatype behind the %
	// %d prints the digit value of the arg
	// %c prints the ascii char value of the arg
	// print regular text
	printf("String you want to output\n");
	// print using varaibles (%d prints the digit, %c prints the character)
	printf("This is variable a as a number: %d\n", a);
	printf("This is variable a as a charater: %c\n", a);

	return 0;
}
