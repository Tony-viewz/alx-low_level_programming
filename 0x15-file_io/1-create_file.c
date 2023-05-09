#include "main.h"

/**
 * create_file - Creates a new file and writes content to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, text_length);

	if (fd == -1 || bytes_written == -1 || bytes_written != text_length)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
