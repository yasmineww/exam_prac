#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;

	if (begin_list == NULL || *begin_list == NULL)
		return;
	cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp);
	}
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *cure;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	cure = *begin_list;
	if (cmp(cure->data, data_ref) == 0)
	{	
		*begin_list = cure->next;
		free(cure);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		cure = *begin_list;
		ft_list_remove_if(&cure->next, data_ref, cmp);
	}
}

