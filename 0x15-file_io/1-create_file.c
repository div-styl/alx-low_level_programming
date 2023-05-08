#include "main.h"
/*by div-styl*/
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fdiscriptor, len = 0;
	size_t i;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	fdiscriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdiscriptor == -1)
		return (-1);
	if (text_content == NULL)
	{
		i = write(fdiscriptor, text_content, len);
		if (i == (size_t)-1)
		{
			close(fdiscriptor);
			return (-1);
		}
	}
	close(fdiscriptor);
	return (1);
}
