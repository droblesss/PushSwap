/*

Comprobar que todos son numeros --> isalnum
Comprobar que no haya ningun repetido --> Por hacer
Comprobar que no es mayor que un int  
*/
#include "push.h"

void all_elements_are_numbers(t_list *list)
{
    while (list != NULL) {
        if (!ft_isdigit(list->content)) {
            perror("Error: Se encontró un elemento que no es un número.");
            return;
        }
        list = list->next;
    }
}

void not_repeat(t_list *stack_a)
{
    int number;
    t_list *aux;

    
    while ((stack_a)->size > 0)
    {
        number = stack_a->content;
        (aux) = (stack_a);

    while (stack_a !=NULL){
        if (number == stack_a->next->content)
            perror("All the number must be different");
        stack_a=stack_a->next;
    }
    aux = aux->next;
    stack_a = aux;
    stack_a->size--;
    }
}