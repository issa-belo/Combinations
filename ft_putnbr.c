#include<unistd.h>
//#include<limits.h>

void	ft_putnbr(long long nb);
void	ft_putchar(char c);
int main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(407);
	write(1, "\n", 1);
	ft_putnbr(-2147);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long long nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
