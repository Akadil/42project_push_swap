#include "../headers/ft_stack.h"
#include <unistd.h>

void    ft_commands_rrr(t_stack *a, t_stack *b)
{
    int i;
    int rotator;

    if (a->size > 1)
    {
        rotator = a->num[a->size - 1];
        i = a->size - 1 - 1;
        while(i > -1)
        {
            a->num[i + 1] = a->num[i];
            i--;
        }
        a->num[0] = rotator;
    }
    if (b->size > 1)
    {
        rotator = b->num[b->size - 1];
        i = b->size - 1;
        while(i-- > -1)
            b->num[i + 1] = b->num[i];
        b->num[0] = rotator;
    }
    write(1, "rrr\n", 4);
}
