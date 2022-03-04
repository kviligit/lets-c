
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
