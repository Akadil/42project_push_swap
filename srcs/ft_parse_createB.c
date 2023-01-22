#include "../headers/ft_stack.h"
#include <stdlib.h>

/*
    Goal:   Create the stack 'b'

    How:    According to the size (size of stack 'a'), create
            an array and assign it zero

    input:  size -      size of stack 'a'
    outpur: signal -    1 if success, 0 if fail
*/

int ft_create_b(int size, t_stack *b)
{
    int *array;
    int i;

    array = (int *)malloc(sizeof(int) * size);
    if (!array)
        return (0);
    i = 0;
    while (i < size)
    {
        array[i] = 0;
        i++;
    }
    b->num = array;
    b->size = 0;
    return (1);
}