
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	
	char a;
	char b;
	char c;
	char n;

	a = '0';
	b = '1';
	c = '2';
	n = '0';


	while (n <= '9')
	{
		while (a <= '9')
		{
			ft_putchar(a);
			a++;
		}
		
		while (b <= '9')
		{
			ft_putchar(b);
			b++;
		}

		while (c <= '9')
		{
			ft_putchar(c);
			c++;
		}
		
		n++;
	}
	
}

