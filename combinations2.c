#include<unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int a, int b);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while(i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			ft_putnbr(j, i);
		j++;
		}
	i++;
	}
}
void	ft_putnbr(int num1, int num2)
{
	ft_putchar(num1 / 10 + 48);
	ft_putchar(num1 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(num2 / 10 + 48);
	ft_putchar(num2 % 10 + 48);
	if(num2 != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
