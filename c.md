# Datatypes
If you don't declare the value, the value might be filled by random information depending on where in the memory the variable is pointing to.
```c
#include <stdio.h>

int main(void){

	char c = -10; // 1 byte (-128 til 127)
	short s; // 2 bytes
	int i; // 4 bytes
	long l; // 8 bytes

	/*all numbers can be unsigned, this means that they must be positive, and
	therefore it can hold a value up to 2x the maximum value of the datatype.
	unsigned char uc = c;
	*/

	// print c, prints -10
	printf("value of c: %d \n", c);
	// print print c as unsigned, prints 246
	printf("Value of c as unsigned: %u \n", uc);

	return 0;
}
```
<br>

# Printf

```c
#include <stdio_ext.h>

int main(int argc, char const *argv[])
{
	int a = 65;
	// print regular text
	printf("String you want to output\n");
	// print using varaibles (%d prints the digit, %c prints the character)
	printf("This is variable a as a number: %d\n", a);
	printf("This is variable a as a charater: %c\n", a);

	return 0;
}
```
<br>

# Sizeof
Find lenght of **datatype**, not the same as len from python. Sizeof returns the numer of bytes the datatype consits of.

```c
 #include <stdio.h>

int main(void)
{
	//Print length of datatype
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
```
Output:

	sizeof char: 1
	sizeof short: 2
	sizeof int: 4
	sizeof long: 8
	sizeof unsigned char: 1
	sizeof unsigned short: 2
	sizeof unsigned int: 4
	sizeof unsigned long: 8


	
<br>
<br>

# Pointer

```c
#include <stdio.h>


int main(void)
{

	#include <stdio.h>


int main()
{

	/* x is a variable, in c a variable is given a place in the memory
	with size based on the varaible type, that holds the value
	assigned to the variable.
	*/
	int x = 3;
	
	/* this changes the value of x. (More precisely, it changes the
	value at the place in memory that was given to x).
	*/
	x = 7;

	/* *y is an int pointer. An int pointer can only point to an int.
	y is given a place in the memory with size equal to size of a
	memory addressthat holds the address to the object the pointer
	points to. In this case this puts the memory adress of x, into the
	place given to y. y is a pointer that now points to the value at
	the memory location given to x. 
	*/
	int *y = &x;


	/* This prints the value in the location given to y, which now
	contains the memory adress of x as hexadecimal.
	*/
	printf("Y contains: %p\n",y);

	// to prove that the output of the above line is correct.
	// Addresses given by using & has the type pointer. 
	printf("Memory adress of x is: %p\n",&x);

	// prints
	printf("Y contains (in decimal): %ld\n",(long int)y);

	// prints the address of the pointer y
	printf("%p\n",&y);

	//This prints the content of the address y points to.
	printf("Y points to the value: %d\n", *y);
	
	return 0;
}

}
```
<br>
<br>

# String

```c
#include <stdio.h>

int main(void)
{
	// Three different ways of creating a string:

	// Creates an immutable string. 
	// Attempting to edit will result in segmentation fault. 
	char *string1 = "hi";

	// Creates a mutable string.
	char string2[] = "hi";

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
```
<br>
<br>

# Array

```c

int main(void)
{
	// create array, must be given a type.
	// All elements must be of said type.

	/*
	This sets aside 20*sizeof(int) bytes in memory for this array,
	but does not wipe these bytes in memory. Might contain random data.
	*/
	int array[20];
	
	// To make sure there is noe random data in array:
	int cleanArray[20] = {0};
	
	// There is no way to find the size of an array. If you give an
	// array as an argument, you must also give the size of the array.


	return 0;
}

```
<br>
<br>

# Title

```c
code
```
<br>
<br>

# Title

```c
code
```
<br>
<br>