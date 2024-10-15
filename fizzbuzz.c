#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c , 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);

	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}

	if (nb >= 0 && nb < 10)
	{
		ft_putchar('0' + nb);
	}

	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(int argc, char **argv)
{
	printf("%s\n", ft_putnbr(22537);
}
