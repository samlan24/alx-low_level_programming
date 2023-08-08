# This is a repo on Malloc and Free
## Malloc
- It's a function that helps you reserve a certain amount of memory space while your program is running.
Here is an example
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to int
    int *myNumber;

    // Use malloc to allocate memory for an int (4 bytes)
    myNumber = (int *)malloc(sizeof(int));

    if (myNumber == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Assign a value to the allocated memory
    *myNumber = 10;

    // Print the value
    printf("Value of myNumber: %d\n", *myNumber);

    // Free the allocated memory when done using it
    free(myNumber);

    return 0; // Exit the program successfully
}
```
## free
- it  free the allocated memory when done using it
