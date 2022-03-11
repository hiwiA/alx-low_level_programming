#include <stdio.h>
/*
 *Print all the letters except q and e
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

