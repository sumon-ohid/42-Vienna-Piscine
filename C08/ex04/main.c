
#include "ft_stock_str.h"
#include <stdio.h>

void				ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	struct s_stock_str	*tab;

	tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	return (0);
}
