#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_arr(int n, int *arr)
{
	int	i;

	i=0;
	while(i < n)
	{
		ft_putchar(arr[i] + 48);
		i++;	
	}
	if(arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void	ft_generate_combos(int n, int value, int index, int *arr)
{
	//int c = value;
	if(index == n)
	{
		ft_print_arr(n, arr);
		return ;
	}
	while(value <= 9)
	{
		arr[index] = value;
		ft_generate_combos(n, value + 1, index + 1, arr);
		value++;
	}
}
void	ft_print_combn(int n)
{
	int	arr[9];
	if(n > 0 && n < 10)
	{
		ft_generate_combos(n, 0, 0, arr);
	}
}
int	main(void)
{
	ft_print_combn(4);
}
