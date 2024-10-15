#include <stdio.h>

int	modif_value(int arg)
{
	arg = arg * 10;
	return arg;
}

int	modif_refer(int *arg)
{
	*arg = *arg * 10;
	return *arg;
}

int	main(void)
{
	int	val;
	int	ref;

	ref = 1;
	val = 1;

	printf("Valeur variable 1 : %d\n", val);
	printf("Renvoi fonction : %d\n", modif_value(val));
	printf("Après modification : %d\n", val);

	printf("\nValeur variable 2 : %d\n", ref);
	printf("Renvoi fonction : %d\n", modif_refer(&ref));
	printf("Après modification : %d\n", ref);
}
