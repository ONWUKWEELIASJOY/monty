#include "monty.h"

/**
  * execute - function that executes the opcode
  * @stack: head stack linked list
  * @counter: line count
  * @file: pointer to monty file stream
  * @content: line content
  *
  * Return: nothing
  */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
