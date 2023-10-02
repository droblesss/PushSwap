/*

Comprobar que todos son numeros --> isalnum
Comprobar que no haya ningun repetido --> Por hacer
Comprobar que no es mayor que un int  
*/
#include "push.h"

int all_elements_are_numbers(char **list)
{
    int i = 1;
    int j = 0;

    while (list[i]) {
        while (list[i][j])
        {
            ft_isdigit(list[i][j]);
            j++;
            /* code */
        }
        i++;
    }

    return 1; // Si llega al final de la cadena sin encontrar caracteres no numéricos, retorna 1 (todos son números).
}



void not_repeat(t_list *stack_a)
{
    t_list *current;
    t_list *compare;
    int size;
    int number;

    size = ft_lstsize(stack_a);
    current = stack_a;

    while (size > 0)
    {
        number = current->content;
        compare = current->next; // Corregido aquí

        while (compare != NULL)
        {
            if (number == compare->content)
            {
                printf("Duplicated number: %d\n", number);
                exit(1);
            }
            compare = compare->next;
        }

        size--;
        current = current->next;
    }
}
