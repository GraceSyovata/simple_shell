#include "shell.h"
/**
 * main - main funct
 * @arc: len argument
 * @arv: arv argument by user
 * @envp: envp argument env
 * Return: 0
 */
int main(int arc, char **arv, char **envp)
{
	bool interactive = (arc == 1 && isatty(STDIN_FILENO));

	prompt(arv, envp, interactive);
	return (0);
}
