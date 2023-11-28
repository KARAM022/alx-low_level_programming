#include "main.h"

/**
 * read_textfile - khkhkh
 * @filename: khkhkh
 * @letters: khkhkh
 *
 * Return: khkhkh
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *bf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	bf = malloc(sizeof(char) * (letters));
	if (!bf)
		return (0);

	r = read(f, bf, letters);
	w = write(STDOUT_FILENO, bf, r);

	close(f);

	free(bf);

	return (w);
}
