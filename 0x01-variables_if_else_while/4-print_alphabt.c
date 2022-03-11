#include <stdio.h>
/**
 *  * main - Prints alphabet
 *   * @void: Empty parameter list for main.
 *    *
 *     * Description: Prints the alphabet in lower case
 *      * Skip q and e
 *       * Can only use putchar
 *        *
 *         * Return: 0 for success
 */
int main(void)
{
	char alp = 'a';

	for (  ;  alp <= 'z' ; alp++)
		if (alp != 'q' && alp != 'e')
			putchar(alp);

	putchar('\n');


	return (0);

}

