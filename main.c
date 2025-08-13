#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

/**
 * For Reference
 * 
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;
*/

int main()
{
	STACK_T *s;
	
	s = stack_int_init(1);

	printf("Size: %d\n", stack_int_size(s));
	printf("Len: %d\n", stack_int_len(s));

	printf("%d\n", stack_int_add(s, 128));

	printf("Size: %d\n", stack_int_size(s));
	printf("Len: %d\n", stack_int_len(s));

	printf("%d\n", stack_int_add(s, 256));
	printf("%d\n", stack_int_add(s, 512));

	printf("Size: %d\n", stack_int_size(s));
	printf("Len: %d\n", stack_int_len(s));

	printf("%d\n", stack_int_pop(s));
	printf("%d\n", stack_int_pop(s));

	printf("Size: %d\n", stack_int_size(s));
	printf("Len: %d\n", stack_int_len(s));

	printf("%d\n", stack_int_pop(s));

	printf("Size: %d\n", stack_int_size(s));
	printf("Len: %d\n", stack_int_len(s));

	stack_clean(s);
	
	return EXIT_SUCCESS;
}
