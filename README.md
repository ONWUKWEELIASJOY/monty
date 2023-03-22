# **ALX TEAM PROJECT (MONTY)**
> ALX Team Project on (C - Stacks, Queues - LIFO, FIFO) _ monty
* This is an ALX collaboration project on C - Stacks, Queues - LIFO, FIFO) monty. 

 **Monty language**
- Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

  **Monty byte code file**s
-  Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.
- Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account.

**The monty program**
-  Usage: monty file
 - where file is the path to the file containing Monty byte code
- If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
- If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
- where <file> is the name of the file
- If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
- where is the line number where the instruction appears.
- Line numbers always start at 1
-  The monty program runs the bytecodes line by line and stop if either:
- it executed properly every line of the file
- it finds an error in the file
-  an error occured
- If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
- You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)


## Authors ##

?? **ONWUKWE-ELIAS JOY CHINONSO**
 - GitHub: [@onwukweeliasjoy](https://github.com/ONWUKWEELIASJOY)
 - Twitter: [@onwukweeliasjoy](https://twitter.com/ELIAS_JOY1)
 - Facebook: [@onwukweeliasjoy] (https://www.facebook.com/profile.php?id=100086024554959&mibextid=ZbWKwL)
 - Instagram: [@onwukweeliasjoy](https://instagram.com/v_log_blog?igshid=ZDdkNTZiNTM=)
 - Linkedin: [@onwukweeliasjoy](https://ng.linkedin.com/in/dd-minaj-entertainment-930b67228)
 - Upwork: [@onwukweeliasjoy](https://www.upwork.com/freelancers/~0134dcd1e5c02ed30e)

 
 ?? **Akinola Sultan**
 - Github: [@akinolasultan](https://github.com/Sultanakinola)
 - Instagram: [@akinolasultan](https://instagram.com/bravewealth_?igshid=YmMyMTA2M2Y=)
 - Linkedin: [@akinolasultan](https://ng.linkedin.com/in/akinola-sultan-283454264)

## Project was completed using

 - C language
 - Shell
 - Betty linter

## General Requirement for project

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h

## More Info
**Data structures**
- The following data structures for this project.
- Included in tge header file.

`/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;`


`/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;`


## Compilation & Output

code was compiled using:
`gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`

- Output must be printed on stdout
- Any error message must be printed on stderr

## Acknowledgements

All work contained in this project was completed as part of the curriculum for ALX Africa SE. ALX Africa is an online full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning. For more information, visit [ALX](https://www.alxafrica.com/)
