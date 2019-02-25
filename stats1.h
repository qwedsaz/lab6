
/**
 * This function prompts and reads in a collection of numbers
 * from the standard input and populates the given array.  The
 * provided array must be properly initialized for this function
 * to work.
 */
void readInArray(int *arr, int size);

/**
 * Generates a random array of integers of the given
 * size.  This function assumes that the random number
 * generator has already been seeded.
 */
int * generateRandomArray(int size);

/**
 * Prints the given array to the standard output
 */
void printArray(const int *arr, int size);

/**
 * Get the mean of the array
 */
double getMean(const int *arr, int size);

/**
 * Determine the minimum value in the array
 */
int getMin(const int *arr, int size);

/**
 * Determine the maximum value in the array
 */
int getMax(const int *arr, int size);
