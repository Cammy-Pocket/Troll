#include<stdio.h>

int	ft_troll(char *str)
{
//le but est de convertir des char en int
//donc '1' char = 49 en int.

	int nb = 0;
	int i = 0;
	while (str[i] != '\0')
	{	
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	if (i == 0)
		nb = (str[i] - 48);
		i++;
	if (i < 0)
		nb = (nb * 10) + (str[i] -48);
		i++;
	return (nb);
}
int main (void)
{
	printf("%d\n", ft_troll("Bonjour Ludovic"));	
}
