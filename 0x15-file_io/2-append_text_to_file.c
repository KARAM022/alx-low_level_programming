#include "main.h"

/**
 * append_text_to_file - hkkhkhkh
 * @filename: hkkhkhkh
 * @text_content: hkkhkhkh
 *
 * Return: hkkhkhkh
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nl;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		rw = write(f, text_content, nl);

		if (rw == -1)
			return (-1);
	}

	close(f);

	return (1);
}
