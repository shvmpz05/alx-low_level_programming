#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * print_alphabet - prints out alphabets
 * @void: no parameter
 * Return: 1 or 0
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints out alphabets 10 lines
 * @void: no parameter
 * Return: 1 or 0
 */

void print_alphabet_x10(void);

/**
 * _islower - checks if letter is uppcase or lowercase
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _islower(int c);

/**
 * _isalpha - checks if value is alpha
 * @c: parameter to check
 * Return: 1 or 0
 */

int _isalpha(int c);

/**
 * print_sign - check the sign of a number
 *
 * @n: parameter to check
 *
 * Return: 1 or 0
 */

int print_sign(int n);

/**
 * _abs - Prints absolute value of integer
 *
 * @n: parameter to check
 *
 * Return: 0 or 1
 */

int _abs(int n);
#endif
