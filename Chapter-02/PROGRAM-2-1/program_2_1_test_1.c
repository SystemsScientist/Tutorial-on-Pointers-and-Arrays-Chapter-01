// program_2_1_test_1.c -- illustrates the relationship between
// 			   pointers and arrays

#include <stdio.h>

int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;

int main(void) {

	int i;
	ptr = &my_array[0]; // point our pointer to the first element of the array
	
	printf("\n");

	for (i = 0; i < 6; i++) {
		printf("my_array[%d} = %d   ", i, my_array[i]); /* <-- A */
		printf("ptr + %d = %d\n", i, *ptr++);
	}

	printf("\n");
	return 0;
}
