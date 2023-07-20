#include <unistd.h>
#include <stdio.h>


int ft_len(char *cadena)
{
	int i = 0;

	while (cadena[i] != '\0')
		i++;
	return (i);
}


int main(int argc, char **argv)
{
	//int i = 0;
	int point = 0;


	if (argc == 2)
	{
		int lon = ft_len(argv[1]);
		if (argv[1][lon] == ' ' && lon >=0)
				lon--;
		while(lon > 0 && argv[1][lon] != ' ')
		{		
			lon--;
			point = lon;
		}
		point++;
		while (argv[1][point] != '\0')
		{
			write (1, &argv[1][point], 1);
			point++;
		}
}

write (1, "\n",1);
return (0);
}
