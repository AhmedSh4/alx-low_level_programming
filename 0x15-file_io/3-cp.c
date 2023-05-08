#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *allocate_buffer(char *file);
void close_file(int fd);

/**
* allocate_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *allocate_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
int status;
status = close(fd);

if (status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If src_file does not exist or cannot be read - exit code 98.
* If dest_file cannot be created or written to - exit code 99.
* If src_file or dest_file cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int src_fd, dest_fd, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp src_file dest_file\n");
exit(97);
}

buffer = allocate_buffer(argv[2]);
src_fd = open(argv[1], O_RDONLY);
r = read(src_fd, buffer, 1024);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (src_fd == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(dest_fd, buffer, r);
if (dest_fd == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

r = read(src_fd, buffer, 1024);
dest_fd = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);

free(buffer);
close_file(src_fd);
close_file(dest_fd);

return (0);
}

