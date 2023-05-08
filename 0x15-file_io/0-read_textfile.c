#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: Number of bytes read and printed, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t bytes_written;
ssize_t bytes_read;

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
bytes_read = read(file_descriptor, buffer, letters);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(file_descriptor);

if (bytes_written != bytes_read)
return (0);

return (bytes_written);
}

