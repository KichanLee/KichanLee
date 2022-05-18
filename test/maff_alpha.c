#include<unistd.h>
/*

	char even = 'B';
	char odd = 'a';

	while ( even <= 'Z')
		write(1, &odd, 1)
		write(1, &even,1)
		even +=2;
		odd +=2;



	return 0;
}
*/

int main(void)
{
	char	c;
	char	tmp;

	c = 'a';
	while (c <= 'z')
	{
		if (c % 2 == 0)
		{
			tmp = c - 32;
			write(1, &tmp, 1);
		}
		else
			write(1, &c, 1);
		c++;
	}
	return (0);
}
