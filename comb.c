#include<unistd.h>

void	print_combn(int n, int *arr);
void	ft_combn(int n);
void	ft_putchar(char c);
void	ft_recursive_combn(int n, int value, int index, int *arr);

int	main(void)
{
	ft_combn(2);	
}

void	ft_recursive_combn(int n, int value, int index, int *arr)
{
	if(index == n)
	{
		print_combn(n, arr);
		return ;
	}
	while(value <= 9)
	{
		arr[index] = value; //just stay at the last index and chang its value.
		ft_recursive_combn(n, value + 1, index + 1, arr); 
		value++;
	}
}

void	ft_combn(int n)
{
	int arr[9];

	if(n > 0 && n < 10)
	{
		ft_recursive_combn(n, 0, 0, arr);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combn(int n, int *arr)
{
	int	i;

	i=0;
	while(i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if(arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
