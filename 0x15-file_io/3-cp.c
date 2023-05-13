#include "main.h"
#include <stdio.h>

void checkIOStat(int status, int fileDescriptor, char *fileName, char mode);

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, non-zero value otherwise
 */
int main(int argc, char *argv[])
{
	int sourceFile, destinationFile, numberOfBytesRead = 1024,
	    numberOfBytesWritten, closeSource, closeDestination;
	unsigned int filePermission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |
		S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	sourceFile = open(argv[1], O_RDONLY);
	checkIOStat(sourceFile, -1, argv[1], '0');

	destinationFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			filePermission);
	checkIOStat(destinationFile, -1, argv[2], 'W');

	while (numberOfBytesRead == 1024)
	{
		numberOfBytesRead = read(sourceFile, buffer, sizeof(buffer));
		if (numberOfBytesRead == -1)
			checkIOStat(-1, -1, argv[1], '0');

		numberOfBytesWritten = write(destinationFile, buffer,
				numberOfBytesRead);
		if (numberOfBytesWritten == -1)
			checkIOStat(-1, -1, argv[2], 'W');
	}
	closeSource = close(sourceFile);
	checkIOStat(closeSource, sourceFile, NULL, 'C');

	closeDestination = close(destinationFile);
	checkIOStat(closeDestination, destinationFile, NULL, 'C');

	return (0);
}

/**
 * checkIOStat - checks if a file can be opened or closed
 * @status: file descriptor of the file to be opened
 * @fileName: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void checkIOStat(int status, int fd, char *fileName, char mode)
{
	if (mode == 'L' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'H' && status == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", fileName);
		exit(98);
	}
	else if (mode == 'M' && status == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", fileName); 
		exit(99);
	}
}
