#include "stack.h"

/**
 * Internal
 */

StackInt *to_stack_int(STACK_T *s)
{
    return (StackInt *)s;
}

int stack_int_resize(StackInt *ss, size_t size)
{
    if ((ss->len * sizeof(int)) >= size) return -1;
    
    int *tmp = malloc(ss->size);
    memcpy(tmp, ss->arr, ss->size);

    ss->arr = realloc(ss->arr, size);
    memcpy(ss->arr, tmp, ss->size);
    ss->size = size;

    return 1;
}

/**
 * Public
 */

STACK_T *stack_int_init(size_t capacity)
{
    if (capacity <= 0) return NULL;
    
    StackInt *s;
    s = malloc(sizeof(StackInt));
    s->len = 0;
    s->size = capacity * sizeof(int);
    s->arr = (int *)malloc(s->size);

    return (STACK_T *)s;
}

int stack_int_add(STACK_T *s, int item)
{
    StackInt *ss = to_stack_int(s);

    if ((ss->len * sizeof(int)) >= ss->size)
        if (stack_int_resize(ss, (ss->size + sizeof(int))) == -1)
            return -1;
    
    ss->arr[ss->len] = item;
    ss->len += 1;
    return 1;
}

int stack_int_pop(STACK_T *s)
{
    StackInt *ss = to_stack_int(s);
    if (ss->len == 0) return -1;
    
    int tmp = ss->arr[ss->len-1];

    ss->arr[ss->len-1] = 0;
    ss->len -= 1;

    if (stack_int_resize(ss, (ss->size - sizeof(int))) == -1)
        return -1;

    return tmp;
}

int stack_int_size(STACK_T *s)
{
    StackInt *ss = to_stack_int(s);
    return ss->size;
}

int stack_int_len(STACK_T *s)
{
    StackInt *ss = to_stack_int(s);

    return ss->len;
}

void stack_clean(STACK_T *s)
{
    StackInt *ss = to_stack_int(s);

    free(ss->arr);
    free(ss);
}
