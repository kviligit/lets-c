#include <stdio.h>

int main(void)
{
	// Three different ways of creating a string:

	// Creates an immutable string. 
	// Attempting to edit will result in segmentation fault. 
	char *string1 = "hi";

	// Creates a mutable string.
	char string2[] = "hi";

	// Obsolete 	
	// Works the same way as string2 but done manually.
	// Remember to add a nullbyte to indicate string end.
	char string3[3];
	string3[0] = 'h';
	string3[1] = 'i';
	string3[2] = 0; 

	printf("%s\n",string1);
	printf("%s\n", string2);
	printf("%s\n", string3);

	//Make changes in mutable string:
	string3[1] = 'a';
	printf("%s\n", string3);
	return 0;

}