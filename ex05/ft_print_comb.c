#include <unistd.h>

void
	ft_putchar(char c)
{
	write(1, &c, 1);
}

void
	ft_print_comb(void)
{
	char	i[3];

	i[0] = '0';
	while (i[0] <= '9')
	{
		i[1] = '0';
		while (i[1] <= '9')
		{
			i[2] = '0';
			while (i[2] <= '9')
			{
				if (i[0] < i[1] && i[1] < i[2])
				{
					ft_putchar(i[0]);
					ft_putchar(i[1]);
					ft_putchar(i[2]);
					ft_putchar(' ');
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
//**TEST**
int
	main(void)
{
	ft_print_comb();
	return (0);
}
