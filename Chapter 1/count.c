#include <stdio.h>

/* count characters in input */
main()
{
	int c;
	long nl, nt, nb;
	nl = nt = nb = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
}
	printf("%ld, %ld, %ld\n", nl, nt, nb);

}
