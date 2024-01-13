#include "shell.h"
/**
 * handle_exit - fn that terminate the prog when
 * user types "exit".
 * @cmd: the string to be read.
 * Return: nothing.
 *
 */
void handle_exit(char *cmd)
{
	if (_strcmp("exit", cmd) == 0)
	{
		free(cmd);
		exit(EXIT_SUCCESS);
	}
}
