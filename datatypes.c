#include <stdio.h>

int main(void){

	char c = -10; // 1 byte (-128 til 127)
	short s; // 2 bytes
	int i; // 4 bytes
	long l; // 8 bytes

	/*all numbers can be unsigned, this means that they must be positive, and
	therefore it can hold a value up to 2x the maximum value of the datatype.
	*/
	unsigned char uc = c;

	// print c, prints -10
	printf("value of c: %d \n", c);
	// print print c as unsigned, prints 246
	printf("Value of c as unsigned: %u \n", uc);

	return 0;
}