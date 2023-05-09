#include "main.h"

/**
 * append_text_to_file - Appends a given string to the end of a specified file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the string to append.
 * Return: On success, returns 1; on failure, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, string_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (string_length = 0; text_content[string_length];)
			string_length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, text_content, string_length);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
