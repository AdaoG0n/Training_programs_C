#ifndef INTCHAR_H
# define INTCHAR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
char    *ft_itoa(int n);
int     get_num_len(int n);

#endif
