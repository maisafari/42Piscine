int main (int argc, char **argv)
{
	char *line;
	int fd;

	if (argc == 2)
	{
		if(!(fd = open(argv[1], O_RDONLY| O_CREAT)))
			{
				printf("file wasn't read");
				return(-1);
			}
	while(get_next_line(fd, &line))
		printf("%d\n %s\n\n",fd, line);
	
	}
	else
	{
		printf("give us a file name!!");
	}
	return(0);
}