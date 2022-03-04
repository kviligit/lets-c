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
