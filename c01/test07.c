extern int ft_rev_int_tab(char *);

#include <stdio.h>
#include <stdlib.h>

int main() {
	int *c;

	// test 01
	printf("\033[96m====== TEST ft_rev_int_tab(01) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\n14\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 02
	printf("\033[96m====== TEST ft_rev_int_tab(02) ======\033[39m\n");
	ft_rev_int_tab("\n\\\"");
	printf("\033[36mvaleurs attendue :\033[39m\n3\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 03
	printf("\033[96m====== TEST ft_rev_int_tab(03) ======\033[39m\n");
	ft_rev_int_tab("\033[32mHello colors\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\n23\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 04
	printf("\033[96m====== TEST ft_rev_int_tab(04) ======\033[39m\n");
	ft_rev_int_tab("");
	printf("\033[36mvaleurs attendue :\033[39m\n0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
