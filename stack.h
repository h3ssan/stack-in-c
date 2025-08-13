#ifndef __STACK_H__
#define __STACK_H__

#include <stdlib.h>
#include <memory.h>

typedef struct
{
    int *arr;
    size_t len;
    size_t size;
} StackInt;

typedef void STACK_T;

STACK_T *stack_int_init(size_t);

int stack_int_add(STACK_T *s, int item);
int stack_int_pop(STACK_T *s);
int stack_int_size(STACK_T *s);
int stack_int_len(STACK_T *s);


void stack_clean(STACK_T *s);


#endif