# Simple Stack in C

> Note this implementation is for educational purposes. Many improvements are required.

## Example

Check full example in `main.c` file.

```c
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
```

## Build and run

> Running `make` the code will be compiled, and run the simple Stack in C software. 

```bash
make
```

