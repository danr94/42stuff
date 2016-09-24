
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	
	char a;
	char b;
	char c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
		
}

