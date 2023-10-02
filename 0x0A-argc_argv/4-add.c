#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - string there are digit
 * @str: arrays str
 *
 * Return: 0
 */

int check_num(char *str)
{
	/*Declaring variable*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /**Check if str are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print name of a program
 * @argc: count an argument
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv)
{
	/**Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols not digit*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
