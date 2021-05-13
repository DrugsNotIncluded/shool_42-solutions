#include <unistd.h>
#include "ft_print_comb2.h"

void
	ft_putchar(char c)
{
	write(1, &c, 1);
}

void
	ft_delimiter(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void
	ft_set_num(int num, dint_char *c)
{
	c->num[0] = num/10;
	c->num[1] = num%10;
	c->real_num = num;
}

void
	ft_print_num(dint_char c)
{
	ft_putchar(c.num[0]);
	ft_putchar(c.num[1]);
}

void
	ft_inc_num(dint_char *c)
{
	if (c->num[1] < '9')
		c->num[1]++;
	else if (c->num[0] < '9')
		c->num[0]++;
	c->real_num++;
}

int
	ft_comp_num(dint_char n, dint_char k)
{
	if (n.real_num == k.real_num)
		return (0);
	else
		return (1);
}

void
	ft_print_comb2(void)
{
	dint_char *ext_ptr,external;
	dint_char *int_ptr,internal;

	//pointers
	ext_ptr=&external;
	int_ptr=&internal;
	//values
	ft_set_num(0, ext_ptr);

   	while (external.real_num <= 98)
	{
		ft_set_num(0, int_ptr);
		while (internal.real_num <= 99)
		{
			if (external.real_num != internal.real_num)
			{
				ft_print_num(external);
				ft_putchar(' ');
				ft_print_num(internal);
				ft_delimiter();
			}
			ft_inc_num(int_ptr);
		}
		ft_inc_num(ext_ptr);
	}
	
}
//**TEST**
int
	main(void)
{
	ft_print_comb2();
	return (0);
}
