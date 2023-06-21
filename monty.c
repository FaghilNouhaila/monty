#include "monty.h"
global_var var_global;
/**
 * main - driver function for monty program
 * @ac: int num of arguments(argc)
 * @ay: opcode file (argv)
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n";
		exit(EXIT_FAILURE);
	}

	read_file(ay[1], &stack);
	/* recordar liberar memories */
	free_dlistint(stack);
	return (0);
}
