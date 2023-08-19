void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = x + 1;
	while (size > y)
	{
		while (size > x)
		{
			if (&tab[x] > &tab[y])
			{
				ft_swap(&tab[x], &tab[y]);
			}	
			x++;
		}
		y++;
	}	
}
