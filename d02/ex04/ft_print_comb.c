
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	
	char a;
	char b;
	char c;
	char nbr[3];

	a = '0';
	b = '1';
	c = '2';

	while (nbr[3] != (a && b && c))
	{

		while (a < b)
		{
			ft_putchar(a);
			a++;
		}
		
		while (b < c)
		{
			ft_putchar(b);
			b++;
		}

		while (c > a && c >= '9')
		{
			ft_putchar(c);
			c++;
		}
		nbr[3]++;
		
	}	
}

