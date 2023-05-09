#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a text file to stdout
 *
 * @filename: Name of the file to read and print
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters to be read and printed on success, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buff, letters);

	close(fd);

	if (bytes_read == -1)
	{
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	free(buff);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
