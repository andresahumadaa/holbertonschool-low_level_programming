#include "holberton.h"
/**
 * error_close - function that prints the error when close fail.
 * @close_file: validate number for the close function.
 * @fd: File descriptor for the open function of the open function.
 *
 * Return: Always nothing.
 */
void error_close(int close_file, int fd)
{
if (close_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * error_open - function that prints the error when open fail.
 * @fd: File descriptor for the open function of the original file.
 * @file_name: Name of the file to copy.
 *
 * Return: Always nothing.
 */
void error_open(int fd, const char *file_name)
{
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
exit(98);
}
}
/**
 * error_write - function that prints the error when open fail.
 * @fd: File descriptor for the open function of file created.
 * @file_name: Name of the file to copy the content of other file.
 *
 * Return: Always nothing.
 */
void error_write(int fd, const char *file_name)
{
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
exit(99);
}
}
/**
 * copy_file - function copies the content of a file to another file.
 * @file_from: Name of the file to copy.
 * @file_to: Name of the file to copy the content of other file.
 *
 * Return: Always nothing.
 */
int copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, validate, num_bytes, close_to, close_from;
char *buf;
buf = malloc(sizeof(char) * 1024);
if (!buf)
return (-1);
fd_from = open(file_from, O_RDONLY);
error_open(fd_from, file_from);
fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
error_write(fd_to, file_to);
while ((num_bytes = read(fd_from, buf, 1024)) != 0)
{
if (num_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
file_from);
exit(98);
}
validate = write(fd_to, buf, num_bytes);
if (validate == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
file_to);
exit(99);
}
if (validate == 1024)
{
free(buf);
buf = malloc(sizeof(char) * 1024);
if (!buf)
return (-1);
}
}
free(buf);
close_from = close(fd_from);
error_close(close_from, fd_from);
close_to = close(fd_to);
error_close(close_to, fd_to);
return (0);
}
/**
 * main - program that copies the content of a file to another file.
 * @ac: Number of arguments from the command line.
 * @av: Strings of arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(av[1], av[2]);
return (0);
}
