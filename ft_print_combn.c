#include<unistd.h>

void	ft_print_array(char *v, int size, int last);
void	ft_putchar(char c);
void	ft_print_combn(int n);

int main(void)
{
	ft_print_combn(4);
	write(1, "\n", 2);
}
void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int	flag;
	int	base;

	if(n <= 0 || n > 10)
	{
		return ;
	}
	for(int i=0; i<n; i++)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n + i) + 48;
	}
	ft_print_array(v, n, v[0] == v_max[0]);
	while(v[0] != v_max[0])
	{
		flag = n - 1;
		while(v[flag] == v_max[flag])
			flag--;
		base = ++v[flag];
		while(++flag < n)
			v[flag] = ++base;
		ft_print_array(v, n, v[0] == v_max[0]);	
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_array(char *v, int size, int last)
{
	int	i = 0;
	
	while(i < size)
		ft_putchar(v[i++]);
	if(!(last))
		write(1, ", ", 2);
}
