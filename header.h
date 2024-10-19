#ifndef HEAFER
#define HEADER

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_garbage
{
	char			*content;
	struct s_garbage	*next;
    int             freed;
}	t_garbage;

/* functions prototype here */

void    *ft_malloc(size_t len);
void    ft_free(void *ptr);
void    ft_exitt(int n);

t_garbage       *ft_lstnew_plus(void *content);
void    ft_listadd_back_plus(t_garbage  **lst, t_garbage        *new);
#endif
