#include "main.h"

/**
 * create_file - khkhkhk
 * @filename: khkhkhk
 * @text_content: khkhkhk
 *
 * Return: khkhkhk
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nl;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	rw = write(f, text_content, nl);

	if (rw == -1)
		return (-1);

	close(f);

	return (1);
}
