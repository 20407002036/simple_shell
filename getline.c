#include "shell.h"

/**
 * custom_getline - getline
 * @lineptr: buffer
 * @n: size of the buffer lineptr points to
 * @stream: file stream
 * Return: ssize_t
 */

ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream)
{
	static char buffer[BUFFER_SIZE];
        size_t buffer_pos = 0;
         ssize_t buffer_size = 0;
	ssize_t total_bytes_read = 0;
	unsigned int line_length = 0;
	char *line = *lineptr;
	char c;
	char *new_lineptr;

	if (lineptr == NULL || n == NULL)
	{
		errno = EINVAL;
		return (-1);
	}

	if (*lineptr == NULL || *n == 0)
	{
		*n = BUFFER_SIZE;
		*lineptr = (char *)malloc(*n);
		if (*lineptr == NULL)
		{
			errno = ENOMEM;
			return (-1);
		}
		line = *lineptr;
	}

	while (1)
	  {
		if (buffer_pos >= (size_t)buffer_size)
		{
			buffer_size = (ssize_t)fread(buffer, 1, BUFFER_SIZE, stream);
			if (buffer_size <= 0)
			{
				if (line_length > 0)
					return (total_bytes_read);

				return (buffer_size);
			}

			buffer_pos = 0;
		}

		c = buffer[buffer_pos++];
		line[line_length++] = c;

		if (c == '\n' || line_length + 1 >= *n)
		{
			line[line_length] = '\0';
			total_bytes_read += line_length;

			return (total_bytes_read);
		}

		if (line_length + 1 >= *n)
		{
			*n *= 2;
			new_lineptr = (char *)realloc(*lineptr, *n);

			if (new_lineptr == NULL)
			{
				errno = ENOMEM;
				return (-1);
			}

			*lineptr = new_lineptr;
			line = *lineptr + total_bytes_read;
		}
	}
}
