# Get_Next_Line

Main :

int main (int ac, char **av)
{
	int fd;
	int n;
	int i;
	char *line;

	n = 0;
	i = 1;
	(void)ac;
	while (av[i])
	{
		fd = open(av[i], O_RDONLY);
		write(1, "\n\n", 2);
		while((n = get_next_line(fd, &line) > 0))
		{
			dprintf(1, "fd = [%d]   return gnl :(%d) line : {%s}\n", fd, n, line);
			ft_strdel(&line);
		}
		i++;
	}
	printf("\n/!\\ return gnl : %d /!\\\n", n);
	free(line);
	return (0);
}