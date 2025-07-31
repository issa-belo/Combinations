#include <unistd.h>

void ft_comb(void);
void ft_print(char one, char tow, char three);
int main(int arrgc, char *argv[])
{
	ft_comb();

	return 0;
}

void ft_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while(i <= '9')
	{
		j = i+1;
		while(j <= '9')
		{
			k = j+1;
			while(k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}	
		i++;
	}	
}

void ft_print(char one, char tow, char three)
{
	if(!(one == '9' && tow == '8' && three == '7'))
		write(1, ", ", 2);

	write(1, &one, 1);
	write(1, &tow, 1);
	write(1, &three, 1);
}
