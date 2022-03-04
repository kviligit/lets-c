 #include <stdio.h>

int main(void)
{
	//Print length of datatype
	// for some odd reason only works when I use %ld
	printf("sizeof char: %ld\n", sizeof(char));
	printf("sizeof short: %ld\n", sizeof(short));
	printf("sizeof int: %ld\n", sizeof(int));
	printf("sizeof long: %ld\n", sizeof(long));
	printf("sizeof unsigned char: %ld\n", sizeof(unsigned char));
	printf("sizeof unsigned short: %ld\n", sizeof(unsigned short));
	printf("sizeof unsigned int: %ld\n", sizeof(unsigned int));
	printf("sizeof unsigned long: %ld\n", sizeof(unsigned long));
	
	return 0;

}